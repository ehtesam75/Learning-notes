#objects
# in python everything is an object including numbers, strings, lists, and even functions.
#object have attributes and methods
#attributes are variables that belong to the object
#methods are functions that belong to the object

age = 8
# 8 is an object of int class
# 8 has now acess to all the methods and attributes of int class
print(age.real) #8
print(age.imag) #0
print(age.bit_length()) #4
print(id(age)) #meory address of the object


#some objects are mutable and some are immutable
#string, tuple are immutable
#dictionary, list, set are mutable (can be changed after creation)

#int is immutable (means it cannot be changed)
num = 3
num = 4 #new object is created and num is pointing to that new object now
#but the old object is still there in memory, it will be deleted by garbage collector when it is not used anymore

num += 1 #same; a new object is created and its different from the old one
