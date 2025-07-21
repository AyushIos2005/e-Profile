term=int(input('Enter term : '))
a=0
b=1
print('Fibonacci sequence up to',term,'terms is : ',end=" ") 
for i in range(term):
    print(a,end=" ")
    sum=a+b
    a=b
    b=sum

   