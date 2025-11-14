import random


#Generate a random number between 1 and 100

target_number = random.randint(1, 100)

guess = None
attempts = 0

print("Welcome to the Number Guessing Game!")
print("I'm thinking of a number between 1 and 100.")

#Loop until the user guesses the correct number


while guess != target_number:
    try:
        guess = int(input("Enter your guess: "))
        attempts += 1

        if guess > target_number:
            print("Too high, try again.\n")
        elif guess < target_number:
            print("Too low, try again.\n")
        else:
            print(f"\n🎉 Congratulations! You guessed the number in {attempts} tries.")
    except ValueError:
        print("Invalid input. Please enter an integer.")

