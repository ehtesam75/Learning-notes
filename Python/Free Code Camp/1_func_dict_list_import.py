#importing libraries
import random #importing random library

#function  
def greeting():   #define function - def
    return "Hi"

def get_choice(player):   #define function - def
    player_choice = player     #indentification has to be same for each line in the function
    computer_choice = "paper"   #can use '' or " " for string

    choices = {"player" : player_choice, "computer" : computer_choice} #dictonary
    return choices

result = get_choice("scissors") #calling function
print(result)


#dictonary : key and value pair
color = "red"
dict = {"name" : "ehtesam", "age" : 23, "choices" : color} #key and value pair
#value can be a variable, then it won't need to have ""
#print(dict) #will print the whole dictonary

print(f"Name : {dict['name']}") #f is formated string literal (f string), lets me use variables inside (inside {})
print("Name : " + dict['name'])  #another way : without using f string



#list : like array in c, but more flexible
food = ["pizza", "burger", "eggs"] #list of strings
dinner = random.choice(food) #randomly select one item from the list
print(dinner)