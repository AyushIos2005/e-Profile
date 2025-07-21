a=int(input('Enter a 1st number : '))
b=int(input('Enter a 2nd number : '))
c=int(input('Enter a 3rd number : '))

if(a>b and a>c):
    print(a,"is the largest number")
elif(b>a and b>c):
    print(b,"is the largest number")
else: 
    print(c,"is greatest number")        