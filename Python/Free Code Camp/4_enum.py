from enum import Enum 

#any, all
school = 1
college = 0

ready = any([school, college]) #any() - returns true if any of the values are true
#a list/ tuple of values is passed to the function
ready = all([school, college]) #all() - returns true if all of the values are true
# print(ready) #false


#math
a = round(1.56) #rounds to nearest int
a = round(3.12159, 3) #3.122 
print(a)


#enum 
# a class, enum is a way to define a set of named constant values.
#which are a set of symbolic names bound to unique, constant values.
class status(Enum):
    active = 1
    inactive = 0
    middle = 3

print(status.active) #status.active
print(status.active.name) #active
print(status.active.value) #1
print(status(1).value) #1
print(status(3).name) #middle

print(list(status)) #[<status.active: 1>, <status.inactive: 0>, <status.middle: 3>]
print(len(status)) #3