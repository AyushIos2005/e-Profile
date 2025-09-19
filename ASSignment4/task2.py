# Problem Statement: Write a Python program that:
# 1.   Takes user input and writes it to a file named output.txt.
# 2.   Appends additional data to the same file.
# 3.   Reads and displays the final content of the file.


file = open('output.txt', 'w')

usertext = input('Enter text to write to the file: ')
file.write(usertext + "\n")
file.close()

print("Data successfully written to output.txt.")


file = open('output.txt','a')
appendtext=input('Enter additional text to append :')
file.write(appendtext)
file.close()

print('Data successfully appended.')


print('Final content of output.txt')
file = open('output.txt','r')
read_file = file.read()
print(read_file)
file.close()

