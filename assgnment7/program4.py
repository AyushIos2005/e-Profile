import random

def generate_otp(length=7):
    otp = ''
    for i in range(length):
        digit = random.randint(0, 9) 
        otp += str(digit)  
    return otp

# if __name__ == "__main__":
#     while True:
#         length = int(input("Enter the length of OTP you want: "))
#         otp = generate_otp(length)  # Call the func
#         print("Your OTP is:", otp)

if __name__ == "__main__":
    otp = generate_otp()
    print("Your OTP is:", otp)

