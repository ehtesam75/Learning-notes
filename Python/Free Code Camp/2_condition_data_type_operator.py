#if else condition
a = 3
b = 5
if a > b:
    print("a is greater than b")
    print("yes")
elif a < b:
    print("a is less than b")
    print("no")
else:
    print("a is equal to b")
print("DONE")



#data types
a = 3; print(a) #semicolon is used to separate two statements in one line
print(type(a)) #type of a is int

name = "ehtesam"
print(type(name) == str) #true
print(isinstance(name, str)) #is a name a instance of str? true
print(isinstance(a, float)) #false

a = float(3)
print(type(a)) #float

number = "20"
x = int(number); #convert string to 


#operators
a = 3 / 2; #1.5
a = 3 // 2; #1 #floor division
a = 3 ** 2; #9 #exponentiation
a = 3 + -2; #1, addtion


#or operator returns first true value
print(0 or 1) #1; 
print(False or 'hey') #hey
print('hi' or 'hey') #hi
print([] or False) #False; empty list is false
print(False or []) #[];

#and operator returns first false value
print(0 and 1) #0; 
print(False and 'hey') #False
print('hi' and 'hey') #hey; both are true, returns last value
print([] and False) #[];
print(False and []) #False; 

#is and in operator
#is - identity operator, checks if two variables point to the same object
#in - membership operator, checks if a value is present in a sequence (list, tuple, string, etc.)

#will be disccussed in detail later


#ternary operator
age = 18
print("Adult" if age >= 18 else "minor") #Adult

#complex numbers
num1 = 2 + 3j #j is used to represent imaginary numbers in python
num2 = complex(2, 3) #2 + 3j; complex constructor

print(num2.real, num2.imag) #2.0 3.0


