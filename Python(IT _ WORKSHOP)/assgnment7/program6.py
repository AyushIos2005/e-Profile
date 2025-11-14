def roll_dice(fixed_value):
    return fixed_value  

while True:
    face = int(input("Enter the fixed dice face (1-6): "))

    if 1 <= face <= 6:
        print("Rolling the dice... You got:", roll_dice(face))
    else:
        print("Invalid input! Please enter a number between 1 and 6.")
