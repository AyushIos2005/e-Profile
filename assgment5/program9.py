# I
n = int(input("Enter number of key-value pairs: "))
pairs = []
for i in range(n):
    key = input("Enter key: ")
    value = input("Enter value: ")
    pairs.append((key, value))

grouped = {}
for k, v in pairs:
    grouped.setdefault(k, []).append(v)

print("Grouped Dictionary:", grouped)
