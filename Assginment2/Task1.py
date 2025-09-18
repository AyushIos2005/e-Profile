# Task 1: Check if a Number is Even or Odd
# Problem Statement:  Write a Python program that:
# 1. 	Takes an integer input from the user.
# 2. 	Checks whether the number is even or odd using an if-else statement.
# 3. 	Displays the result accordingly.

num=int(input("Enter a number to check odd or even : "))
if num < 0:
    print(num,"is a negative number.\n")
elif num == 0:
    print(num,"is nethier even nor odd.\n")    
    
elif num % 2 == 0:
    print(num,"is an even number.\n")
else:
    print(num,"is an odd number.\n")    




