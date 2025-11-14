import math
print('Enter the side of triangle')
a=int(input('Enter side "A" : '))
b=int(input('Enter side "B" : '))
c=int(input('Enter side "C" : '))

# Area = √s(s − a)(s − b)(s − c) , where s = (a + b + c)/2
s=(a+b+c)/2
area= float(math.sqrt(s * (s - a) * (s - b)* (s - c)))
print('Area of triangle is :',area)