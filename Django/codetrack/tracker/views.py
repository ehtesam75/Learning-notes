from django.shortcuts import render, redirect, get_object_or_404
from django.contrib.auth import login, logout, authenticate
from django.contrib.auth.decorators import login_required
from django.contrib import messages
from django.core.paginator import Paginator
from django.contrib.auth.models import User
from .models import Problem, SolvedProblem
from .forms import RegisterForm

def home_view(request):
    if request.user.is_authenticated:
        return redirect('dashboard')
    
    total_problems = Problem.objects.count()
    total_users = User.objects.count()
    
    online_judges = Problem.objects.values_list('online_judge', flat=True).distinct()
    total_oj = online_judges.count()
    
    recent_problems = Problem.objects.all().order_by('-created_at')[:10]
    
    context = {
        'total_problems': total_problems,
        'total_users': total_users,
        'total_oj': total_oj,
        'recent_problems': recent_problems,
    }

    return render(request, 'home.html', context)

def register_view(request):
    if request.user.is_authenticated:
        return redirect('dashboard')
    
    if request.method == 'POST':
        form = RegisterForm(request.POST)
        if form.is_valid():
            user = form.save()
            login(request, user)
            messages.success(request, 'Registration successful!')
            return redirect('dashboard')
    else:
        form = RegisterForm()
    
    return render(request, 'register.html', {'form': form})


def login_view(request):
    if request.user.is_authenticated:
        return redirect('dashboard')
    
    if request.method == 'POST':
        username = request.POST.get('username')
        password = request.POST.get('password')
        user = authenticate(request, username=username, password=password)
        
        if user is not None:
            login(request, user)
            return redirect('dashboard')
        else:
            messages.error(request, 'Invalid username or password')
    
    return render(request, 'login.html')


@login_required
def logout_view(request):
    logout(request)
    messages.success(request, 'Logged out successfully!')
    return redirect('home')


@login_required
def dashboard_view(request):
    problems = Problem.objects.all()
    solved_problems = SolvedProblem.objects.filter(user=request.user).values_list('problem_id', flat=True)
    total_solved = solved_problems.count()
    total_problems = problems.count()
    
    problems_data = []
    for problem in problems:
        problems_data.append({
            'id': problem.id,
            'title': problem.title,
            'difficulty': problem.difficulty,
            'online_judge': problem.online_judge,
            'link': problem.link,
            'problem_pdf': problem.problem_pdf,
            'solved': problem.id in solved_problems
        })
    
    paginator = Paginator(problems_data, 10)  
    page_number = request.GET.get('page')
    page_obj = paginator.get_page(page_number)
    
    context = {
        'page_obj': page_obj,
        'total_solved': total_solved,
        'total_problems': total_problems,
    }
    
    return render(request, 'dashboard.html', context)


@login_required
def toggle_solved(request, problem_id):
    if request.method == 'POST':
        problem = get_object_or_404(Problem, id=problem_id)
        solved_problem = SolvedProblem.objects.filter(user=request.user, problem=problem)
        
        if solved_problem.exists():
            solved_problem.delete()
        else:
            SolvedProblem.objects.create(user=request.user, problem=problem)
        
        return redirect('dashboard')
    
    return redirect('dashboard')


@login_required
def profile_view(request):
    solved_problems = SolvedProblem.objects.filter(user=request.user).select_related('problem').order_by('-solved_at')
    total_problems = Problem.objects.count()
    total_solved = solved_problems.count()
    
    completion_rate = round((total_solved / total_problems * 100) if total_problems > 0 else 0)
    
    easy_solved = solved_problems.filter(problem__difficulty='Easy').count()
    medium_solved = solved_problems.filter(problem__difficulty='Medium').count()
    hard_solved = solved_problems.filter(problem__difficulty='Hard').count()
    
    context = {
        'solved_problems': solved_problems,
        'total_solved': total_solved,
        'total_problems': total_problems,
        'completion_rate': completion_rate,
        'easy_solved': easy_solved,
        'medium_solved': medium_solved,
        'hard_solved': hard_solved,
    }
    
    return render(request, 'profile.html', context)
