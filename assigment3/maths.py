# Square root of the number
# o   Natural logarithm (log base e) of the number
# o   Sine of the number (in radians)
# 3.   Displays the calculated results.

from math import *
def sq_root(n):
    return sqrt(n)
def logrth(n):
    return log(n)
def sin_fun(n):
    return sin(n)

n=int(input('Enter a number : '))
print('Square root : ',sq_root(n))
print('Logarithm : ',logrth(n))
print('Sine : ',sin_fun(n))