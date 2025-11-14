string = input('Enter a anything name : ')
vowel = 0

vow='aeiouAEIOU'

for char in string:
    if char in vow:
        vowel+=1
print('Number of vowl in the string is : ',vowel) 

