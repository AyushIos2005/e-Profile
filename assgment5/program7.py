# G
n = int(input("Enter number of elements in list: "))
lst = []
for i in range(n):
    lst.append(input(f"Enter element {i+1}: "))

rotated = [lst[-1]] + lst[:-1]
print("After Rotation:", rotated)
