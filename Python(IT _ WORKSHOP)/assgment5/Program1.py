# A
n = int(input("Enter number of elements in the list (must be multiple of 3): "))
lst = []
for i in range(n):
    val = int(input(f"Enter element {i+1}: "))
    lst.append(val)

chunk_size = n // 3
for i in range(0, n, chunk_size):
    chunk = lst[i:i+chunk_size]
    print("Chunk:", chunk)
    print("After reversing:", chunk[::-1])
