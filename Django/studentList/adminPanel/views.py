from django.shortcuts import render
from .models import Student, Student2
from django.core.paginator import Paginator


# Create your views here.
def dashboard(request):
    students = Student.objects.all()
    total_students = students.count()

    departments = students.values_list('department', flat=True).distinct()
    total_departments = departments.count()

    recent_students = students.order_by('-id')[:5]

    context = {
        'total_students': total_students,
        'total_departments': total_departments,
        'recent_students': recent_students,
    }
    return render(request, 'dashboard.html', context)


def student_grid(request):
    students = Student2.objects.all().order_by('roll')
    paginator = Paginator(students, 2)
    page_number = request.GET.get('page')
    page_obj = paginator.get_page(page_number)
    context = {
        'page_obj': page_obj,
    }
    return render(request, 'student_grid.html', context)

