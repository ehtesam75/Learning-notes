#fuction 
#identation has to be the same for all lines in a certain function

def hello(age, name = "my friend"): #define function - def
    #name = parameter, with default value
    #parameter with default value has to come after pararmeter without default val
    print("welcome " + name + " and you are " + str(age)) #cannot concatinate string with int
    print(f"welcome {name} ({age})")

hello(20, "ehtesam") #ehtesam = argument
hello(55)  #these are call by value btw


def change(value):
    value["name"] = "joyi"

dict = {"name" : "ehtesam"}
change(dict)
print(dict) #{'name': 'joyi'}
#so for dictonary it works like pass by reference


#return statement
def hi(name):
    if not name:    #if no name is passed
        print("no name, no hi:)")
        return
    print(f"hello {name}")
    return name, "tnx for entering name"    #returning mulple elements

hi(False)
print(hi("ratul"))


#nested function
def work(sentence):
    count = 0

    def say(word):
        nonlocal count  #nonlocal is used to modify the variable of outer function
        count += 1
        print(count, end = " ")
        print(word)

    list_of_words = sentence.split(' ') #list_of_words is basically a list here. split(' ') splits the string into substrings
    for word in list_of_words:
        say(word)

work("today is my birthday")


#clousure function 
def enter_num_outer():
    number = []

    def enter_num_inner(num):
        number.append(num)
        print(number)
    
    return enter_num_inner  #returned the inner func

enter_num = enter_num_outer() #enter_num is a function here, which is returned by enter_num_outer
#enter_num function has the initail value of number = [] from the outer function
#enter_num is basically the inner func

enter_num(5) #number = [5]
enter_num(10) #number = [5, 10]
enter_num(15) #number = [5, 10, 15]   
#as we are calling the inner function (basically) the 'number' list is not resetting everytime

#we could have used number list in global portion but that would not be a good practice
#as it would be difficult to track the variable in a large code