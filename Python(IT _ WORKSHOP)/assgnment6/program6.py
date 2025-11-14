def append_in_middle(s1, s2):
    mid = len(s1) // 2   # find middle index of s1
    return s1[:mid] + s2 + s1[mid:]


s1 = input("Enter first string (s1): ")
s2 = input("Enter second string (s2): ")

new_string = append_in_middle(s1, s2)

print("New String:", new_string)
