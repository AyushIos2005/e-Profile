# C. Store Fibonacci numbers between 0 to n in a text file

n = int(input("Enter the upper limit for Fibonacci numbers: "))

file = open("fibo.txt", "w")

a, b = 0, 1
while a <= n:
    file.write(str(a) + "\t")
    a, b = b, a + b

file.close()
print(f"Fibonacci numbers up to {n} stored in 'fibo.txt'")
