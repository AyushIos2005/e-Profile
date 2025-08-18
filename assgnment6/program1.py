def check_in_range(num, low, high):
    return low <= num <= high   #returns True or False


num = int(input("Enter the number: "))
low = int(input("Enter the lower bound: "))
high = int(input("Enter the upper bound: "))

if check_in_range(num, low, high):#function call
    print(f"{num} is in the range [{low}, {high}]")
else:
    print(f"{num} is NOT in the range [{low}, {high}]")
