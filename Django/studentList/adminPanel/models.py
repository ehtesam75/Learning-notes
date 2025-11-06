from django.db import models
from django.core.validators import FileExtensionValidator

# Create your models here.
class Student(models.Model):
    student_id = models.CharField(max_length=10, unique=True)
    name = models.CharField(max_length=100)
    department = models.CharField(max_length=100)
    phoneNo = models.CharField(max_length=15)
    address = models.CharField(max_length=255)

    def __str__(self):
        return self.name
    

class Student2(models.Model):
    student_id = models.CharField(max_length=10, unique=True)
    name = models.CharField(max_length=100)
    roll = models.IntegerField(unique=True)
    department = models.CharField(max_length=100)
    phoneNo = models.CharField(max_length=15)
    address = models.CharField(max_length=255)

    student_img = models.ImageField(
        upload_to = 'pics',
        validators = [FileExtensionValidator(['jpg', 'png', 'jpeg'])],
        null = True,
        blank = True,
        help_text = "Upload a image in jpg, png, jpeg format"
    )

    cv = models.FileField(
        upload_to = 'pdf',
        validators = [FileExtensionValidator(['pdf'])],
        null = True,
        blank = True,
        help_text = "Upload a pdf file"
    )

    def __str__(self):
        return f"{self.name} ({self.roll})"
