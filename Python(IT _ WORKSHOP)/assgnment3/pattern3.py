n=int(input('Enter a number of row : '))

for i in range(1,n+1):
    for h in range(n,i-1,-1):
        print(' ',end=' ')
    for j in range(i,0,-1):
        print(j,end=" ")

    for k in range(2,i+1):
        print(k,end=" ")

    print()         