# program for reverse
a=int(input('Enter a number  : '))
print("Orginal value is : ",a)

digit =0
remainder=0
while(a != 0):
    remainder = a % 10
    digit=digit*10+remainder
    a=a//10

print('Reversed number is : ',digit)