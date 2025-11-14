# C
n = int(input("Enter number of elements in first list: "))
first_list = []
for i in range(n):
    first_list.append(int(input(f"Enter element {i+1} of first list: ")))

m = int(input("Enter number of elements in second list: "))
second_list = []
for i in range(m):
    second_list.append(int(input(f"Enter element {i+1} of second list: ")))

paired = set(zip(first_list, second_list))
print("Paired Set:", paired)
