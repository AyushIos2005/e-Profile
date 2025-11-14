import math
p=int(input('Enter a Principal amount : '))
r=int(input('Enter a Rate of Interest(% per anumm) : '))
t=int(input('Enter a Time period(in year): '))

# ci
m=(1+(r/100))
a=float(p*(pow(m,t)))
ci=a-p


print('Compound Interest is : ',ci)