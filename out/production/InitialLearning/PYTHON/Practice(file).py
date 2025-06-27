<<<<<<< Updated upstream
import random
# hiscore
def game():
    print("Your are playing this game....")
    score = random.randint(1,100)
    with open("hiscore.txt") as file:
        hiscore = file.read()
        if(hiscore!=""):
            hiscore = int(hiscore)
        else:
            hiscore= 0

    print(f"Your score is {score}")
    if(score>hiscore):
        with open("hiscore.txt","w") as file:
            file.write(str(score))

    return score

=======
import random
# hiscore
def game():
    print("Your are playing this game....")
    score = random.randint(1,100)
    with open("hiscore.txt") as file:
        hiscore = file.read()
        if(hiscore!=""):
            hiscore = int(hiscore)
        else:
            hiscore= 0

    print(f"Your score is {score}")
    if(score>hiscore):
        with open("hiscore.txt","w") as file:
            file.write(str(score))

    return score

>>>>>>> Stashed changes
game()