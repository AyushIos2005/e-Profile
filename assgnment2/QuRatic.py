from math import sqrt

a=int(input('Enter the co-efficient of x^2 : '))
b=int(input('Enter the co-efficient of x : '))
c=int(input('Enter the constant term : '))

#discrimant
d=sqrt(b*b-4*a*c)
print('The discriminant is : ',d)

#root1

root1=(-b + d)/(2*a)

#root2

root2=(-b - d)/(2*a)

#check for d == 0
if(d == 0):
    print('The equation has equal roots and the root is :    ',root1,' & ',root2)
elif(d < 0):
    print('No real root it have complex root ')
elif(d>0):
    print('The roots are real and different. The roots are : ',root1,' & ',root2)
