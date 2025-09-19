# factorical


def fact(n):
    if n < 0 : 
        print('Not possible') 
        return 
    if n == 0 or n == 1: return 1
    
    return n*fact(n-1)

n=int(input('Enter a number : '))
l=fact(n)
print('Factorical of ',n,'is : ',l)