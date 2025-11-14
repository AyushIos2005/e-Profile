# B
n = int(input("Enter number of elements in the list: "))
lst = []
for i in range(n):
    val = input(f"Enter element {i+1}: ")
    lst.append(val)

count_dict = {}
for item in lst:
    count_dict[item] = count_dict.get(item, 0) + 1

print("Element Count:", count_dict)
