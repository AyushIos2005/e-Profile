def count_case(s):
    upper_count = 0
    lower_count = 0

    for char in s:
        if char.isupper():
            upper_count += 1
        elif char.islower():
            lower_count += 1

    return upper_count, lower_count


# Take user input
text = input("Enter a string: ")

upper, lower = count_case(text)

print("Number of uppercase letters:", upper)
print("Number of lowercase letters:", lower)
