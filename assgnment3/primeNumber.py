from math import sqrt

num1=int(input('Enter a first number : '))
num2=int(input('Enter a second number : '))

print(f'Prime number between {num1} and {num2} are : ')
for n in range(num1,num2+1):
    if n<2:
        continue
    for i in range(2,int(sqrt(n))+1):
        if n%i==0:
            # print('First number is not a prime number')
            break
    else:
            # print('First number is a prime number')
            print(n,end=" ")