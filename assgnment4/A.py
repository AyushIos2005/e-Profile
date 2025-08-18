Y=input('Enter a your name : ')
print(Y)
upper_case =0
lower_case =0

for char in Y:
    if char.isupper():
        upper_case +=1
    elif char.islower():
        lower_case +=1
print('Lowercase :',lower_case,'& ' 'Uppercase : ', upper_case )        


