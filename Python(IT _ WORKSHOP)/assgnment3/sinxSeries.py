import math

# Function to compute factorial
def factorial(num):
    result = 1
    for i in range(2, num + 1):
        result *= i
    return result

# Function to compute sin(x) using Taylor series
def compute_sin(x, n):
    x_rad = math.radians(x)  # Convert degrees to radians
    sin_x = 0

    for i in range(n):
        sign = (-1) ** i
        term = sign * (x_rad ** (2 * i + 1)) / factorial(2 * i + 1)
        sin_x += term

    return sin_x

# User Input
x = float(input("Enter angle in degrees (x): "))
n = int(input("Enter number of terms (n): "))

# Compute and print result
result = compute_sin(x, n)
print(f"\nsin({x}) ≈ {result}")
print(f"Using math.sin: {math.sin(math.radians(x))} for comparison")
