def is_palindrome(s):
    s = s.lower().replace(" ", "")   # lowercase + remove spaces
    return s == s[::-1]

# Take user input
text = input("Enter a word or phrase: ")

if is_palindrome(text):
    print("Palindrome")
else:
    print("Not Palindrome")
