#include<iostream>
using namespace std;
//make struct

class Node{
    public:
    int data;
    Node*next;
    // constror
    Node(int val){
        data = val;
        next = NULL;
    }
};

Node*head;
Node*tail;


void insert_front(int val){
       

    Node*newNode = new Node(val);
    if(newNode == NULL){
        cout<<"Memory Error!!"<<endl;
    }
    if (head == NULL)
    {
        head = tail =newNode;
        return;
        
    }

    else{
        newNode -> next = head;
        head = newNode;
    }
    
}


void insert_back(int value){
    Node* newNode = new Node(value);
    if(head == NULL){
        head = tail = newNode;
    }
    else{
        tail -> next = newNode;
        tail = newNode;
    }
}

void insert_anywhere(int val,int position){
     if(position < 0){
            cout<<"Invialid pos"<<endl;
            return;
        }
        if(position ==  0){
            insert_front(val);
            return;
        }

        Node* temp = head;//NewNode
        for(int i=0;i<position-1;i++){
            if(temp == NULL){
                cout<<"Position out of range"<<endl;
                return;
            }
            temp=temp -> next;
        }
        Node* newNode = new Node(val);
        newNode->next=temp->next;
        temp->next=newNode;
    }



void delete_front(){
    if(head == NULL){
        cout<<endl<<"LINKED IS EMPTY!!"<<endl;
        return;
    }

    Node* temp = head;
    head = head -> next;
    temp -> next =NULL;
    free(temp);
}

void delete_back(){
    if(head == NULL){
        cout<<endl<<"LINKED IS EMPTY!!"<<endl;
        return;
    }
    Node* temp = head;
    while(temp -> next != tail){
        temp = temp -> next;
    }
    temp -> next = NULL;
    free(tail);
    tail = temp;
}

void display(){
     
     Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<" -> ";
            temp=temp->next;
        }
        cout<<"NULL";
        cout<<endl;
}



int main(){
    cout<<"Press 1 for INSERT at front "<<endl;
    cout<<"Press 2 for INSERT at last "<<endl;
    cout<<"Press 3 for INSERT from anywhere "<<endl;
    cout<<"Press 4 for DELETE from front "<<endl;
    cout<<"Press 5 for DELETE from last "<<endl;
    cout<<"Press 6 for EXIT the program "<<endl;

    int choice;
    int value;
    int position;
    while(1){
    cout<<"Enter  Your Choose : ";
    cin>>choice;

    switch (choice)
    {

    case 1:
        /* code  for insert at front*/
        cout<<"Enter a value form front : ";
        cin>>value;
        insert_front(value);
        break;

    case 2:
        /*code for insert from back */
        cout<<"Enter a value form back : ";
        cin>>value;
        insert_back(value);
        break;

    case 3:
        /* code for insert anywhere */
        cout<<"Enter a value for add anywhere : ";
        cin>>value;
        cout<<"Enter a position : ";
        cin>>position;
        insert_anywhere(value,position); 
        break;  

    case 4:
    /*Code for delete from first */
        cout<<"A node is delete front first!!"<<endl;
        delete_front(); 
        break;

    case 5:
    /*Code for delete from last */
        cout<<"A node is delete back last!!"<<endl;
        delete_back(); 
        break;
              
    case 6:
    /*Code for display the list*/
        cout<<"Display list is : ";
        display();
        break;

    case 7:
        exit(0);
        break; 

    default:
        cout<<"Invalid choice!! Try Angain!!"<<endl;
        break;
    }

    } 
}