# E. Find the size of a file (in bytes)

import os

filename = input("Enter filename to find its size: ")

try:
    size = os.path.getsize(filename)
    print(f"Size of '{filename}' is {size} bytes")
except FileNotFoundError:
    print("Error: File not found!")
