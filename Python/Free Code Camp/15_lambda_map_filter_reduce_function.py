#lamda func
# it is a small anonymous function that can take any number of arguments
# can only have one expression.
# has no name
# it is used to create small functions

lambda num : num + 10 # num is agrument and num + 10 is expression

#note : diff between and statement
#expression returs a value and statement does not

multiply = lambda a, b : a * b #multiply is a function
print(multiply(7, 2)) # 14



#map() function
#map() applies a function to all the items in a list
numbers = [1, 2, 3, 4]

#double = lambda x : x * 2 #here double is a function

result = map(lambda x : x * 2, numbers) #map takes a function and a list as arguments
#result is a map object, its an iterator
#so we used list(result) to convert it to a list 
print(list(result)) # [2, 4, 6, 8]

print(numbers) #1, 2, 3, 4 #original list is not changed


#filter() function
#filter() filters the items in a list based on a function
numbers = [1, 2, 3, 4]

result = filter(lambda x : x % 2 == 0, numbers) #filter takes a function and a list as arguments
#result is a filter object, its an iterator

print(list(result)) # [2, 4]


#reduce() function
#reduce() applies a function to all the items in a list and returns a single value
from functools import reduce

expense = [
    ('dinner', 200),
    ('breakfast', 50),
    ('lunch', 150),
    ('snacks', 100)
]

# sum = 0
# for i in expense:
#     sum += i[1]

#sum = reduce(lambda a, b : a[1] + b[1], expense)   #ERROR
#On the first call, a and b are both tuples, so a[1] + b[1] is an integer.
# On the next call, a is now an integer (the result of the previous call), 
# but b is a tuple, so a[1] will cause a TypeError.

#fix
sum = reduce(lambda total, x : total + x[1], expense, 0) #initial value of total is 0

print(sum)
