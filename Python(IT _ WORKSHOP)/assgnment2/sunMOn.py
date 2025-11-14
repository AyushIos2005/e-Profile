while(1):  
  a=int(input('Enter number its print corresponding days : '))
  if(a >=1 and a<=7):

            if(a==1):
                print('Sunday') 
            elif(a==2):
                print('Monday') 
            elif(a==3):
                print('Tuesday')
            elif(a==4):
                print('Wednsday')  
            elif(a==5):
                print('Thursday')
            elif(a==6):
                print('Friday')      
            elif(a==7):
                print('Saturday')
  else:
            print('Invalid number')
