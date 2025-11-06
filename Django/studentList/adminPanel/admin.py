from django.contrib import admin
from .models import Student, Student2

# Register your models here.
admin.site.register(Student)
# admin.site.register(Student2)

# in admin to : columns to display, add search, or filters.
@admin.register(Student2)
class Student2Admin(admin.ModelAdmin):
    list_display = ('student_id', 'name', 'roll', 'department', 'phoneNo', 'address')
    search_fields = ('student_id', 'name', 'department')
    list_filter = ('department', 'address')