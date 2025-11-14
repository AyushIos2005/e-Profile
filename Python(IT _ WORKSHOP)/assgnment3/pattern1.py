n=int(input("Enter a number of line/row : "))
b=1
for i in range(1,n+2):
    for j in range(1,i):
        print(b,end="")
        b+=1
    print()      