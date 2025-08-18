def rotatelist(l, k):
    if k <= 0:
        return l[:]   
    k = k % len(l)    
    return l[-k:] + l[:-k]

n = int(input("Enter size of list: "))
l = []

for i in range(n):
    val = int(input(f"Enter element {i+1}: "))
    l.append(val)

k = int(input("Enter number of rotations: "))

rotated = rotatelist(l, k)

print("Original List:", l)
print(f"List after {k} rotations:", rotated)
