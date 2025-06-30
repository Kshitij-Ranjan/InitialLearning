<<<<<<< Updated upstream
import random

guess = int(input("Please input a number between 1 and 10: "))
computer_guess = random.randint(1, 10)  # Generate a random number between 1 and 10

for i in range(5):
    if guess < computer_guess:
        print("Bigger")
        guess = int(input("Try again: "))  # Ask for a new guess
    elif guess > computer_guess:
        print("Smaller")
        guess = int(input("Try again: "))  # Ask for a new guess
    else:
        print("You win!!!")
        break  # Exit the loop since the correct guess was made

if guess != computer_guess:
    print("Sorry, you've used all your attempts. The correct number was:", computer_guess)
=======
import random

guess = int(input("Please input a number between 1 and 10: "))
computer_guess = random.randint(1, 10)  # Generate a random number between 1 and 10

for i in range(5):
    if guess < computer_guess:
        print("Bigger")
        guess = int(input("Try again: "))  # Ask for a new guess
    elif guess > computer_guess:
        print("Smaller")
        guess = int(input("Try again: "))  # Ask for a new guess
    else:
        print("You win!!!")
        break  # Exit the loop since the correct guess was made

if guess != computer_guess:
    print("Sorry, you've used all your attempts. The correct number was:", computer_guess)
>>>>>>> Stashed changes
