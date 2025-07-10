// Write a Menu Driven Cpp Program to implement Stack operations using array:
// a) Insert an element in the STACK : void PUSH( int )
// b) Delete an element from the STACK : int POP()
// c) Display all elements of the STACK: void DISPLAY().
// Write the code in such a way that it can produce output according to user choice.
// Ex: push(31), push(71), push(91), display(), pop(), display()….

#include<iostream>
 using namespace std;

 #define max 100

 int stack[max];
 int top=-1;

   void push_element(){
     int value;
     cout<<"Enter value of Push into stack : ";
     cin>>value;
        stack[++top] = value;
        cout<<value<<" is Pushed into stack"<<endl;
      
   }
   void  pop_element(){
   
        int value = stack[top--];
        cout<<value<<" is Poped from stack"<<endl;
     }
   


   void display_stack(){
  
      //stack ko print karna 
        for(int i=top;i>=0;i--){
          cout<<stack[i]<<endl;
        }
    
   }

 int main(){
    int numb;
    while(1){
    cout<<"Press 1 for Push element inside the stack "<<endl;
     cout<<"Press 2 for Pop Out element from stack "<<endl;
      cout<<"Press 3 for Display  the stack "<<endl;
      cout<<"Press 4 for Exit "<<endl;
      cout<<"Enter any one at the time : ";
      cin>>numb;
      switch (numb)
      {
      case 1:
             push_element();
        break;

       case 2: 
             pop_element();
             break;
        case 3:
              display_stack();
        break;
        case 4:
        cout<<"Exiting the program....";
         exit(0);
      default:
      cout<<"Something went wrong"<<endl;
        break;
      }
    }
 }

