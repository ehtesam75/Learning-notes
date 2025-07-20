print('Hello')  
# This is a single line comment

'''this is a multi-line comment
This is a multi-line comment    
This is a multi-line comment'''

# Variables
a = 3;
b = 4.5

roll = 3;
print(type(roll))

is_student = True
print(type(is_student))

n = 10
m = 3

print(n / m) #float division
print(n // m) #integer division
print(n ** m)

#taking input from user

num1 = input('Enter a number: ')
print(num1) 

name = input('Enter your name: ')
print(name)

#printing type of these variables
#when we take input from user, it is always a string
print(type(num1)) #<class 'str'>
print(type(name)) #<class 'str'>

num2 = input('Enter a number: ')
print(num1 + num2)   #concatenation of two strings

print(int(num1) + int(num2)) #sum of two numbers

#fucntion

def say_hello():
    print('Hello')
say_hello() #Hello

def add(a, b):
    return a + b
print(add(3, 4))  #7



#lab work

a = float(input('Enter a floating piont number: '))
b = float(input('Enter a flaoting point number: '))

def display(a,  b):
    print(a + b)
    print(a - b)
    print(a * b)
    print(a / b)
    print(a // b)
    print(a % b)
    print(a ** b)

display(a, b)





