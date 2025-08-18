def check_password_strength(password):
    has_digit = any(ch.isdigit() for ch in password)
    has_upper = any(ch.isupper() for ch in password)
    has_lower = any(ch.islower() for ch in password)
    special_chars = "!@#$%^&*"
    has_special = any(ch in special_chars for ch in password)
    long_enough = len(password) >= 8

    if all([has_digit, has_upper, has_lower, has_special, long_enough]):
        return "Strong Password "
    else:
        return "Weak Password "


while(1):
    pwd = input("Enter your password: ")
    print(check_password_strength(pwd))
    if pwd == 20:
        exit(0)
