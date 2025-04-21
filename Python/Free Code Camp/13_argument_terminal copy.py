# use cd " file location " to nevigate to current directory
import sys

print(sys.argv)

#PS D:\Code-repos\Learning-notes\Python\Free Code Camp> python 13_argument_terminal.py aleen 33
#['13_argument_terminal.py', 'aleen', '33']

name = sys.argv[1] #first argument after the file name

print("hello " + name) 
#PS D:\Code-repos\Learning-notes\Python\Free Code Camp> python 13_argument_terminal.py aleen
#hello aleen



