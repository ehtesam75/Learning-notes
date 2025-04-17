import random

def get_choice():   
    player_choice = input("Enter a choice (rock, paper, scissors): ")
    option = ["rock", "paper", "scissors"] #list
    computer_choice = random.choice(option)

    choices = {"player" : player_choice, "computer" : computer_choice} #dictonary
    return choices

def check_winner(player, computer):
    if player == computer:
        return "It's a tie!"
    
    if player == "rock":
        if computer == "scissors":
            return "rock smashes scissors! You win!"
        else:
            return "paper covers rock! You lose!"
        
    if player == "paper":
        if computer == "rock":
            return "paper covers rock! You win!"
        else:
            return "scissors cuts paper! You lose!"
        
    if player == "scissors":    
        if computer == "paper":
            return "scissors cuts paper! You win!"
        else:
            return "rock smashes scissors! You lose!"
    

choices = get_choice()
result = check_winner(choices["player"], choices['computer'])
print(f"Player choice: {choices['player']}")
print(f"Computer choice: {choices['computer']}")
print(result)

