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


#list : like array in c, but more flexible
food = ["pizza", "burger", "eggs"] #list of strings
dinner = random.choice(food) #randomly select one item from the list
print(dinner)