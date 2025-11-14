import random
import string

def generate_password(length):
 
    upper = random.choices(string.ascii_uppercase, k=2)   
    lower = random.choices(string.ascii_lowercase, k=1)  
    digit = random.choices(string.digits, k=1)            
    special = random.choices("!@#$%^&*()", k=1)          
 
    remaining = length - (2 + 1 + 1 + 1)
    others = random.choices(string.ascii_letters + string.digits + "!@#$%^&*()", k=remaining)

    password_list = upper + lower + digit + special + others

  
    random.shuffle(password_list)

    
    password = "".join(password_list)
    return password

while True:
    length = int(input("Enter password length (minimum 10): "))

    if length < 10:
        print("Password length must be at least 10!")
    else:
        password = generate_password(length)
        print("Generated Password: ", password)
