def matmult(m1, m2):
    rows_m1 = len(m1)
    cols_m1 = len(m1[0])
    rows_m2 = len(m2)
    cols_m2 = len(m2[0])

    
    if cols_m1 != rows_m2:
        raise ValueError("Something is error for multiplication")


    result = [[0 for _ in range(cols_m2)] for _ in range(rows_m1)]

    # Perform mult
    for i in range(rows_m1):
        for j in range(cols_m2):
            for k in range(cols_m1):
                result[i][j] += m1[i][k] * m2[k][j]

    return result



# Matrix 1
r1 = int(input("Enter number of rows in Matrix 1: "))
c1 = int(input("Enter number of columns in Matrix 1: "))
m1 = []
print("Enter elements of Matrix 1 row-wise:")
for i in range(r1):
    row_input = input().split()   
    row = []
    for val in row_input:
        row.append(int(val))      
    m1.append(row)

# Matrix 2
r2 = int(input("Enter number of rows in Matrix 2: "))
c2 = int(input("Enter number of columns in Matrix 2: "))
m2 = []
print("Enter elements of Matrix 2 row-wise:")
for i in range(r2):
    row_input = input().split()
    row = []
    for val in row_input:
        row.append(int(val))
    m2.append(row)

# mupltiply
print("Matrix 1:", m1)
print("\n")
print("Matrix 2:", m2)
print("\n")
print("Product:", matmult(m1, m2))
