def factorial(n):
    mul = 1
    for i in range(1, n + 1):
        mul *= i
    return mul


n = int(input("Enter the number of terms: "))

sum = 0.0
for i in range(1, n + 1):
    sum += i / factorial(i)

print(f"Sum of first {n} terms is: {sum}")
