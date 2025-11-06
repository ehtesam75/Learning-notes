from django.db import models
from django.contrib.auth.models import User
from django.core.validators import FileExtensionValidator

class Problem(models.Model):
    difficulty_choices = [
        ('Easy', 'Easy'),
        ('Medium', 'Medium'),
        ('Hard', 'Hard'),
    ]
    
    oj_choices = [
        ('LeetCode', 'LeetCode'),
        ('HackerRank', 'HackerRank'),
        ('CodeForces', 'CodeForces'),
        ('CodeChef', 'CodeChef'),
        ('AtCoder', 'AtCoder'),
        ('GeeksforGeeks', 'GeeksforGeeks'),
        ('SPOJ', 'SPOJ'),
        ('Other', 'Other'),
        ('Eolymp', 'Eolymp'),
        ('CSES', 'CSES'),
        ('Toph', 'Toph'),
    ]
    
    title = models.CharField(max_length=200)
    difficulty = models.CharField(max_length=10, choices=difficulty_choices, default='Easy')
    online_judge = models.CharField(max_length=20, choices=oj_choices, default='CodeForces')
    link = models.URLField(max_length=500)
    
    problem_pdf = models.FileField(
        upload_to='Problem_PDF/', 
        validators=[FileExtensionValidator(['pdf'])],
        blank=True, 
        null=True,
        help_text="Upload a PDF file for the problem"
    )
    created_at = models.DateTimeField(auto_now_add=True, editable=True)
    
    class Meta:
        ordering = ['title']
    
    def __str__(self):
        return f"{self.title} ({self.difficulty})"


class SolvedProblem(models.Model):
    user = models.ForeignKey(User, on_delete=models.CASCADE)
    problem = models.ForeignKey(Problem, on_delete=models.CASCADE)
    solved_at = models.DateTimeField(auto_now_add=True, editable=True)
    
    class Meta:
        unique_together = ('user', 'problem')
    
    def __str__(self):
        return f"{self.user.username} - {self.problem.title}"
