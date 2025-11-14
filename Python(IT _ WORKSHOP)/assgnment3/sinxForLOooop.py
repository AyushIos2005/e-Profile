# Program to compute sin(x) using series expansion

x = float(input("Enter the value of x (in radians): "))
n = int(input("Enter the number of terms: "))

sin_x = 0.0

for i in range(n):
    power = 2 * i + 1       # 1, 3, 5, 7, ...
    fact = 1
    for j in range(1, power + 1):
        fact *= j           # factorial

    term = (x ** power) / fact

    if i % 2 == 0:           # even index → positive term
        sin_x += term
    else:                    # odd index → negative term
        sin_x -= term

print(f"sin({x}) ≈ {sin_x}")
