Y=int(input('Enter a year : '))
if Y%4==0 and (Y%100!=0 or Y%400==0):
    print(Y,"is a leap year")
else:
    print(Y,"is not leap year")    