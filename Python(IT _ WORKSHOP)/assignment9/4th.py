# D. Read lines from a text file and display them

try:
    file = open(pong.txt, "r")
    print("File contents are:\n")
    for line in file:
        print(line.strip())
    file.close()
except FileNotFoundError:
    print("Error: File not found!")
