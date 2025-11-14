def collatz_sequence(n):
    if n <= 0:
        return "Please enter a positive integer."
    
    seq = [n]   # store sequence
    while n != 1:
        if n % 2 == 0:
            n = n // 2
        else:
            n = 3 * n + 1
        seq.append(n)
    return seq


# Take user input
num = int(input("Enter a positive integer: "))
print("Collatz Sequence:", collatz_sequence(num))
