from django.contrib import admin
from .models import Problem, SolvedProblem

admin.site.site_header = "CodeTrack"
admin.site.site_title = "CodeTrack"
admin.site.index_title = "CodeTrack Admin Portal"

@admin.register(Problem)
class ProblemAdmin(admin.ModelAdmin):
    list_display = ['title', 'difficulty', 'link', 'online_judge', ]
    list_filter = ['difficulty', 'online_judge']
    search_fields = ['title']

@admin.register(SolvedProblem)
class SolvedProblemAdmin(admin.ModelAdmin):
    list_display = ['user', 'problem', 'solved_at']
    list_filter = ['user', 'solved_at']
