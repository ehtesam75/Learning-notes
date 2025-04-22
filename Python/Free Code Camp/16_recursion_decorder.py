# recursion
def fact(n):
    if n == 1 : return 1
    return n * fact(n-1)

print(fact(5))


#decorator fucntion
#decorators are functions that take another function as an argument 
# and extend its behavior without explicitly modifying it.

def greet(func): #greet is a decorator func; func is the original function
    def wrapper():
        print("good morning")
        func()
        print("thanks for using this function")
    return wrapper

#what if i don't use wrapper func (and don't return anything)?; it will cause a type error
#I'm using @greet as a decorator, but greet does not return a function;
# it immediately calls func() and prints messages.
#So, after decoration, hello becomes None, and calling hello() (at line 30) will raise a TypeError

@greet #means hello = greet(hello)
def hello():
    print("hello world")

hello()
# greet(hello)() #alternative to the above line; but not a good pratise