from django.urls import path
from . import views

urlpatterns = [
    path('', views.home, name="home"),
    path('service/', views.service, name = "service"),
    path('index/', views.index, name = "index"),
    path('about/', views.about, name = "about")
]