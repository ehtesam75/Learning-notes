"""
docstring

this is a module docstring
it describes the purpose of the module and provides an overview of its functionality

can be used for multi line comments
"""

class dog:
    """"
    this is dog class
    """

    def bark(self):
        """"
        this is bark method
        """
        print("woof woof")

print(help(dog)) #prints the docstring of dog class



#annotations
#annotations are used to add metadata to function arguments and return values

def add(a: int, b: int) -> int:  #this func will take a and b of only int value
    #and it will return a int value
    return a + b

count : int = 0 #now count will be a int
