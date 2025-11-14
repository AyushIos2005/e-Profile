

email = input("Enter your email: ").strip()

if "@" in email:
    domain = email.split("@")[1]
    companyname=domain.split('.')[0]
    print("Company name :", companyname)
else:
    print("Invalid email. No company name found.")
