#exception

"""
try:
    #some lines of code
except <erro name>
    #handle the error
except <erorr name 2>
    #handle the error
except:
    #handle all other errors
else:
    #if no error occurs, this block will be executed
finally:
    #this block will always be executed

"""

# result = 2 / 0 #ZeroDivisionError
# print(result) #error; not executed

try:
    result = 2 / 0 #ZeroDivisionError
except ZeroDivisionError:
    print("division by zero error")
finally:
    print("all done")
    result = 1

print(result)


#i can raise an exception in my code
#raise Exception('An error!!!!!!') #an error will be displayed

try:
    raise Exception("An error")
except Exception as error:
    print("self generated error")

