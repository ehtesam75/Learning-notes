# class
#object are instance of class

class animal: #animal is parent class
    def walk(self): 
        print("walking.....")

class dog(animal):  #dog inherit the animal class
    def __init__(self, name, age): #init is
        self.name = name
        self.age = age

    def bark(self): #method of dog class
        #all instance methods must have self as their first parameter to refer to the current object
        #self is a reference to the current instance of the class
        print("ghew ghew") 

robart = dog("robart", 3) #robart is an instance/object of dog class
robart.bark()

#what if i don't write self in the method parameter
#when robart.bark() is called, python automatically passes the instance (robart) as the first argument, 
# but the method (bark) doesn't accept it, causing a TypeError

print(robart.name)
print(robart.age)
print(robart.bark()) #this also print 'None', beisde "ghew ghew"
#it bacuase there is no return statement; robark.bark() already print "ghew ghew"
#to overcome this issue: we could return "ghew ghew" without printing it in the method


#inheritence
robart.walk()