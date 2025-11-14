# A. Write "Welcome to Python" in a text file

# Open a file in write mode
file = open("welcome.txt", "w")

# Write text to file
file.write("Welcome to Python")
file.write("\n Ayush Verma")

# Close the file
file.close()

print("Data written successfully to 'welcome.txt'")
