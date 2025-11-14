print('Program for a^b')
a=int(input('Enter a number :'))
b=int(input('Enter a power: '))


product=1
for i in range(b):
    product=product*a

print(a ,end=" ")
print('to the rasied power', end=" ") 
print(b,end=" ")
print(" = ",product)   
