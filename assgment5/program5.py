# E
n = int(input("Enter number of key-value pairs: "))
speed = {}
for i in range(n):
    k = input("Enter key: ")
    v = int(input("Enter value: "))
    speed[k] = v

unique_vals = []
for val in speed.values():
    if val not in unique_vals:
        unique_vals.append(val)

print("Unique Values:", unique_vals)
