# program for palindrome
a=int(input('Enter a number  : '))
print("Orginal value is : ",a)

temp =a
digit =0
remainder=0
while(a != 0):
    remainder = a % 10
    digit=digit*10+remainder
    a=a//10

print('Reversed number is : ',digit)

if(temp == digit):
    print('Number is palindrome')
else:
    print('Number is not palindrome')