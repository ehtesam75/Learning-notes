from django.urls import path
from . import views

urlpatterns = [
    path('', views.dashboard, name = 'dashboard'),
    path('student-grid/', views.student_grid, name='student_grid'), 
    
]
