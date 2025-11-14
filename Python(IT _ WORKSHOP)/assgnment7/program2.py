import random  

rollx=int(input("Enter the number of times you want to roll the dice: "))

counts = {
    "one": 0,
    "two": 0,
    "three": 0,
    "four": 0,
    "five": 0,
    "six": 0
}


for i in range(rollx):
    roll = random.randint(1, 6)  
    if roll == 1:
        counts["one"] += 1
    elif roll == 2:
        counts["two"] += 1
    elif roll == 3:
        counts["three"] += 1
    elif roll == 4:
        counts["four"] += 1
    elif roll == 5:
        counts["five"] += 1
    else:
        counts["six"] += 1


print("Results after rolls:", rollx)
for face, count in counts.items():
    print(face.capitalize(), ":", count)
