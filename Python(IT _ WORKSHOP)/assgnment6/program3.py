import math

def is_sum_of_squares(m):
    for i in range(1, int(math.sqrt(m)) + 1):
        k = i * i
        l = m - k
        if l > 0 and int(math.sqrt(l))**2 == l:   # check if l is a perfect square
            return True, i, int(math.sqrt(l))
    return False, None, None

# Take user input
m = int(input("Enter a positive integer: "))

if m > 0:
    result, a, b = is_sum_of_squares(m)
    if result:
        print(f"{m} can be expressed as the sum of squares: {a}² + {b}²")
    else:
        print(f"{m} cannot be expressed as the sum of two perfect squares.")
else:
    print("Please enter a positive number.")
