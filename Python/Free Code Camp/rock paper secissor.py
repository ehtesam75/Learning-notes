import random #importing random library

def get_choice():   
    player_choice = input("Enter a choice (rock, paper, scissors): ")
    option = ["rock", "paper", "scissors"] #list
    computer_choice = random.choice(option)

    choices = {"player" : player_choice, "computer" : computer_choice} #dictonary
    return choices

def check_winner(player, computer):
    if player == computer:
        return "It's a tie!"
    


