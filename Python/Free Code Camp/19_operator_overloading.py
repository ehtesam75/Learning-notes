#operator overloading
class dog:
    def __init__(self, name, age):
        self.name = name
        self.age = age
    
    def __gt__(self, other):    #__gt__ is used to overload > operator
        return True if self.age > other.age else False
    
roger = dog("roger", 9)
billu = dog("billu", 15)

print(roger > billu)    #older or younger
print(roger < billu)


#more
# __add__() respond to the + operator
# __sub__() respond to the - operator
# __mul__() respond to the * operator
# __truediv__() respond to the / operator
# __floordiv__() respond to the // operator
# __mod__() respond to the % operator
# __pow__() respond to the ** operator
# __rshift__() respond to the >> operator
# __lshift__() respond to the << operator
# __and__() respond to the & operator
# __or__() respond to the | operator
# __xor__() respond to the ^ operator



