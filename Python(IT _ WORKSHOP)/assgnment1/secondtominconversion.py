
num = int(input('Enter Second : '))
hour=int((num/3600))
print('Hours : ',hour)
min =int((num%3600)/60)
print('Minutes : ',min)
sec=(num%60)
print('Second : ',sec)
print("Time :- "f"{hour} : {min} : {sec}")
