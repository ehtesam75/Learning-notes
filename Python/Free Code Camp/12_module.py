#module
#A module in Python is simply a .py file that can be imported into another Python file 
# to use its functions, classes, or variables


#the imported file has to in the same directory
import test #test is a module here, test.py is imported
from test import human #specificly importing human fucntion(only)

robart = test.dog();  #notice : test.dog()
robart.bark() #ghew ghew

test.animal() #walking.....

human() #sleeping ; notice : no need to add test in front now!



#if the file (that is to be imported) is in a subfolder, in the same directory
from subfolder import test_sub #importing test_sub.py from subfolder
from subfolder.test_sub import another_sub_folder_func #specificly importing another_sub_folder_func fucntion(only)
#we need to add __init__.py file in the subfolder to make it a package

test_sub.sub_folder_cat() #sub folder cat meow meow

another_sub_folder_func() #i am a fucntion lies in subfolder
#notice : didn't need to add 'subfoler' in front



#built-in modules

#math: for math utilities
# re: for regular expressions
# json: to work with JSON
# datetime: to work with dates
# sqlite3: to use SQLite
# os: for operating system utilities
# random: for random number generation
# statistics: for statistics utilities
# requests: to perform HTTP network requests
# http: to create HTTP servers
# urllib: to manage URLs


#math module
import math
print(math.sqrt(16)) #4.0

#or
from math import pi #immport only pi from math module
print(pi) #didn't use math.pi


