from django.http import HttpResponse
from django.shortcuts import render, redirect
from adminPanel.models import Student, Student2
from django.db import IntegrityError
from django.contrib import messages
from django.shortcuts import get_object_or_404

def homePage(request):
    return HttpResponse("<h1>hi here we go </h1>")

def student_list(request):
    students = Student.objects.all()
    context = {'students' : students}
    return render(request, 'student_list.html', context)

def add_student_page(request):
    if request.method == 'POST':
        student_id = request.POST.get('student_id')
        name = request.POST.get('name')
        department = request.POST.get('department')
        phoneNo = request.POST.get('phoneNo')
        address = request.POST.get('address')
    
        try:
            Student.objects.create(
                student_id=student_id,
                name=name,
                department=department,
                phoneNo=phoneNo,
                address=address
            )
            messages.success(request, 'Student added successfully!')
            return redirect('student_list')
    
        except IntegrityError:
            messages.error(request, f'Student with this ID ({student_id}) already exists.')
            return redirect('add_student')

    return render(request, 'add_students.html')


def student_detail(request, pk):
    student = get_object_or_404(Student2, pk=pk)
    context = {'student': student}
    return render(request, 'student_details.html', context)
