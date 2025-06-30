import random

## Rock paper scissors

def get_choices():
    ## def is to define a function(here it is get_choices)
    player_choice = input("Enter a choice(rock,paper or scissors): ")
    options = ["rock","paper","scissors"]
    computer_choice = random.choice(options)
    choices_picked = {"player": player_choice, "computer": computer_choice}
    return choices_picked

def check_win(player, computer):
    print(f"You chose {player} and the computer chose {computer}")
    if player.lower() == computer:
        return "Its a tie"

    elif player.lower() == "rock":
        if computer == "scissors":
            return "Rock crushes scissors\nYOU WIN!!!"
        else: return "Paper covers rock,You lose."

    elif player.lower() == "paper":
        if computer == "scissors":
            return "Scissor cuts paper,You lose."
        else: return "Paper covers rock\nYOU WIN!!!"

    elif player.lower() == "scissors":
        if computer == "paper":
            return "Scissor cuts paper\nYOU WIN!!!"
        else: return "Rock crushes scissors,You lose."

choice = get_choices()
result = check_win(choice["player"], choice["computer"])
print(result)



