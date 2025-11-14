# B. Store first n prime numbers in a text file

def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num ** 0.5) + 1):
        if num % i == 0:
            return False
    return True

n = int(input("Enter how many prime numbers to store: "))

file = open("prime.txt", "w")
count = 0
num = 2

while count < n:
    if is_prime(num):
        file.write(str(num))
        count += 1
    num += 1

file.close()
print(f"First {n} prime numbers stored in 'primes.txt'")
