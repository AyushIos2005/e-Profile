# decimmal to binary 
num=int(input('Enter a decimal integer : '))

binary=""

if num == 0:
    binary='0'
else:
    while num > 0 :
          rem = num % 2
          binary=str(rem)+binary
          num=num // 2

print('Binary representation of the decimal number is :',binary)

# print(bin(num)[2:])