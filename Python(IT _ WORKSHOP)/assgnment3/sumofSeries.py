# Compute the sum up to n terms in the series
# 1 - 1/2 + 1/3 - 1/4 + 1/5 -... 1/n, where n is a positive integer and input by user.
n=int(input('Enter a Nth term : '))
sum_even = 0
sum_odd = 0
for i in range(1, n + 1):
    if i % 2 == 0:
        sum_even += 1/i
    else :
        sum_odd += 1/i

Y = sum_odd-sum_even 
print(round(Y,5),'is Sum of Series')  