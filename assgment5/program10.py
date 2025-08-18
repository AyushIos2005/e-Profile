# J
from collections import deque

d = deque()
n = int(input("Enter number of elements to append on right: "))
for i in range(n):
    d.append(input(f"Enter element {i+1}: "))

m = int(input("Enter number of elements to append on left: "))
for i in range(m):
    d.appendleft(input(f"Enter element {i+1} (left): "))

print("Deque after appending:", d)

if d:
    d.pop()
if d:
    d.popleft()

print("After removing from both ends:", d)

d.reverse()
print("After reversing:", d)
