from django.shortcuts import render, HttpResponse

# Create your views here.
def home(request):
    return render(request, 'home.html')
    # return HttpResponse("Hello, welcome to the new app!")

def service(request):
    return render(request, 'service.html')

def index(request):
    context = {
        "var" : "this is sent from views.py",
        "num" : 7575
    }
    return render(request, 'index.html', context);

def about(request):
    return render(request, 'about.html')