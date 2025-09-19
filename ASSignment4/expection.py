try:
    with open("sample.txt", "r") as file:   
        for line in file:                  
            print(line)            
except FileNotFoundError:
    print("Error: The file 'sample.txt' does not exist.")
except Exception as e:
    print(f"An unexpected error occurred: {e}")
