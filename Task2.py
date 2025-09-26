# Task 2: Demonstrate List Slicing 
# Problem Statement: Write a Python program that:
# 1.   Creates a list of numbers from 1 to 10.
# 2.   Extracts the first five elements from the list.
# 3.   Reverses these extracted elements.
# 4.   Prints both the extracted list and the reversed list
 
l1=[1,2,3,4,5,6,7,8,9,10]
print("Original list: ",l1)
print("Extracted first five elements: ",l1[0:5])
print("Reversed extracted elements: ",list(reversed(l1[0:5])))