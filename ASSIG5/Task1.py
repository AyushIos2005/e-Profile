# Task 1: Create a Dictionary of Student Marks

# Problem Statement: Write a Python program that:
# 1.   Creates a dictionary where student names are keys and their marks are values.
# 2.   Asks the user to input a student's name.
# 3.   Retrieves and displays the corresponding marks.
# 4.   If the student’s name is not found, display an appropriate message.


student_dic = {'Alice':85,'Shanti':63,'Bob':79,'Ayush':100}

name=input("Enter the student's name :  ")

if name in student_dic:
    print("{}'s  marks: {}".format(name,student_dic[name]))
else:
    print("Student not found.")        

