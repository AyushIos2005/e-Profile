#include<iostream>
using namespace std;
#define size 5
int top =-1;
int stack[size];
    
void push(){
	if(top == size-1){
		cout<<"Stack is underflow"<<endl;
		return;
	}
	else if (top == size -1){
		cout<<"Stack is overflow now it doesnot insert element";
		return;
		
	}
	else{
		int ele;
		cout<<"Enter a element for Insert to stack : ";
		cin>>ele;
		
//		logic is 
		stack[++top]=ele;
		cout<<ele<<"is successfully added!! to stack !!"<<endl;
	}
}
void pop(){
	if(top == -1){
		cout<<"Stack is underflow!!";
		return;
	}
	else{
		stack[top--];
		cout<<"Element is popped!!"<<endl;
		
	}
} 
void display(){
	if(top == -1){
		cout<<"Stack is empty"<<endl;
	}
	else{
	for(int i=top;i>=0;i--){
          cout<<stack[i]<<endl;
        }
	}
}   


int main(){
	cout<<"/t/tWelcome to Stack Program"<<endl;
	cout<<"Press 1 for Insert elment to stack"<<endl;
	cout<<"Press 2 for Delete element from stack"<<endl;
	cout<<"Press 3 for Display stack "<<endl;
	cout<<"Press 4 for end the program "<<endl;
	int choice,ele;
	while(1){
	

	cout<<"Enter a choice (1 to 4) : ";
	cin>>choice;
	
	switch(choice){
		case 1:
			push();
			break;
		case 2:
		       pop();
			break;	
		case 3:
		      display();
		      break;
		case 4:
		      exit(0);
		      break;
		default:
		   cout<<"Try anagain!!"<<endl;
		               	
			
		    
	}
}
}