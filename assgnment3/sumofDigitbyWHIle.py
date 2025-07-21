# program for reverse
a=int(input('Enter a number  : '))
print("Orginal value is : ",a)

digit =0
remainder=0
sum=0
while(a != 0):
    remainder = a % 10
    sum = sum + remainder
    digit=digit*10+remainder
    a=a//10

print('Sum of digit of  number is : ',sum)