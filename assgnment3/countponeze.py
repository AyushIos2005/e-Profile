pos=0
neg=0
zer=0
print('press 8777 to stop')
while True:
    num=int(input('Enter anumber :'))

    if num == 8777:
        break
    if num > 0:
        pos += 1
    elif num < 0:
        neg += 1
    else:
        zer+=1

print('\nCount of +ve number : ',pos)
print('\n count of -ve number :  ',neg) 
print('Count of Zeros : ',zer)

