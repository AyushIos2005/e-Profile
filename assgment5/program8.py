# H
m = int(input("Enter number of rows: "))
n = int(input("Enter number of columns: "))
matrix = []
for i in range(m):
    row = []
    for j in range(n):
        row.append(int(input(f"Enter element [{i+1},{j+1}]: ")))
    matrix.append(row)

for i in range(m):
    print(f"Sum of row {i+1}:", sum(matrix[i]))
