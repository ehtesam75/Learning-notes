from django.db import models

class User(models.Model):
    id = models.AutoField(primary_key=True)
    name = models.CharField(max_length=100)
    email = models.EmailField(unique=True)
    gender = models.CharField(
        max_length=10,
        choices=[       
            # first stored in db, second  is dsplay value in forms/admin panel
            ('M', 'Male'),
            ('F', 'Female'),
            ('Oth', 'Other')
        ],
        null=True,
        blank=True
    )
    date_of_birth = models.DateField(null=True, blank=True)
    created_at = models.DateTimeField(auto_now_add=True)  #current timestamp when created
    is_active = models.BooleanField(default=True)

    #rename table
    class Meta:
        db_table = 'Customer'

    def __str__(self):
        return f"{self.name} ({self.gender})"