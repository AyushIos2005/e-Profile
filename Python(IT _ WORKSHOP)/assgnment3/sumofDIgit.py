print('Program for sum of digit of a number')

num=int(input('Enter a number : '))
digit=0
sum =0
while num>0:
    digit+=num%10
    sum+=digit
    num//=10
print('Sum of digit of the number is :',digit)