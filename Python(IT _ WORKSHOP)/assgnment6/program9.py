def caesar_encrypt(text, shift):
    result = ""
    for char in text:
        if char.isalpha():  # process only alphabets
            base = ord('A') if char.isupper() else ord('a')
            result += chr((ord(char) - base + shift) % 26 + base)
        else:
            result += char  # keep non-alphabets unchanged
    return result


def caesar_decrypt(text, shift):
    return caesar_encrypt(text, -shift)  # reverse shift


# Take user input
message = input("Enter your message: ")
key = int(input("Enter shift value (key): "))

encrypted = caesar_encrypt(message, key)
decrypted = caesar_decrypt(encrypted, key)

print("\nEncrypted:", encrypted)
print("Decrypted:", decrypted)
