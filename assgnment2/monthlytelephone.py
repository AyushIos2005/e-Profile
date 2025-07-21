# minimum 300 rup -> 19=30 calls
calls = int(input("Enter the number of calls made in the month: "))

# Minimum charge
bls = 300  

if calls <= 130:
    bls = 300
elif calls <= 200:
    bls = 300 + (calls - 130) * 0.20
elif calls <= 250:
    bls = 300 + (70 * 0.20) + (calls - 200) * 0.50
else:
    bls = 300 + (70 * 0.20) + (50 * 0.50) + (calls - 250) * 0.60

# Output 
print("Your total telephone bill is: Rs.", bls)
