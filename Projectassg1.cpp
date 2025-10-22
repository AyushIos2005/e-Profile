#include<iostream>
#include<limits>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
#define xxx 100
int stack[xxx];
int top = -1;
char queue[xxx];
int front = -1;
int rear = -1;


class Node{
    public:
    int data;
    Node* next;
    //contructor
    Node(int val){
        data=val;
        next=NULL;
    }
};
class List{
    // public:
    Node *head;
    Node *tail;
    public:
    List(){
        head = tail =NULL;
    }

    void push_fornt(int val){
        Node* newNode = new Node(val);//new val
        if(newNode == NULL){
            cout<<"Memory error !!"<<endl;

        }
        if(head == NULL){
            head=tail=newNode;
            return;
        }
        else{
            newNode->next = head;
            head = newNode;
        }

    }
    void push_end(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head=tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }

    }

    void push_anywhere(int val,int pos){

        Node*newNode = new Node(val);
        Node*temp = head;
        if(pos < 0){
            cout<<"OUT OF MEMORY SPACE !!";
            return;
        }
        if(pos == 0){
            push_fornt(val);
        }

        for(int i = 0;i<pos - 1;i++){
            temp = temp -> next;
        }
        newNode -> next = temp -> next;
        temp -> next = newNode;

    }

    void delete_front(){
        if(head == NULL){
            cout<<"List is empty !! "<<endl;
            return;
        }
        Node* temp = head;
        head = head -> next;
        temp -> next =NULL;
        delete(temp);
    }

    void delete_end(){
        if(head == NULL){
            cout<<"List is empty !! "<<endl;
            return;
        }
        Node* temp = head;
        while(temp -> next != tail)
            {
                temp = temp -> next;
            }
        temp -> next =NULL;
        delete(tail);
        tail = temp;
    }
    
    void delete_anywhere(int pos){
          if (head == NULL) {
        cout << "List is empty!" << endl;
        return;
    }

    Node* temp = head;

    // If deleting the first node
    if (pos == 1) {
        head = temp->next;
        delete temp;
        return;
    }

    // Traverse to node before the one we want to delete
    for (int i = 1; temp != NULL && i < pos - 1; i++) {
        temp = temp->next;
    }

    // If position is invalid
    if (temp == NULL || temp->next == NULL) {
        cout << "Invalid position!" << endl;
        return;
    }

    Node* nodeToDelete = temp->next;
    temp->next = temp->next->next;
    delete nodeToDelete;
    }


    void display(){
        Node* temp =head;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp=temp->next;

        }
        cout<<"NULL"<<endl;
    }
};

class tree_Node{
    public:
    int data;
    tree_Node* left;
    tree_Node* right;

    tree_Node(int val){
        data=val;
        left = right = NULL;
    }
};

tree_Node* create(int data){
    return new tree_Node(data);
}

tree_Node *insertNode(tree_Node* root,int data){
    if(root == NULL)
    {
        return create(data);
    }
    if(data < root->data){
        root->left = insertNode(root->left,data);
    }else if(data > root->data){
        root->right = insertNode(root->right,data);
    }
    return root;
}

void preorder(tree_Node *root){
    if(root != NULL) {
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(tree_Node *root){
    if(root != NULL) {
        // cout<<root->data<<" ";
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}


void postorder(tree_Node *root){
    if(root != NULL) {
        // cout<<root->data<<" ";
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
}



void countingSortByDigit(int arr[], int n, int exp) {
    int output[n];  
    int count[10] = {0};

    // Count occurrences of each digit
    for (int i = 0; i < n; i++) {
        int digit = (arr[i] / exp) % 10;
        count[digit]++;
    }

    // Cumulative count (prefix sum)
    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }

    // Build output array (stable, so traverse from end)
    for (int i = n - 1; i >= 0; i--) {
        int digit = (arr[i] / exp) % 10;
        output[count[digit] - 1] = arr[i];
        count[digit]--;
    }

    // Copy back to arr[]
    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}


void radixsort(int arr[], int n) {
    // Find the maximum number
    int mx = *max_element(arr, arr + n);

    // Do counting sort for every digit
    for (int exp = 1; mx / exp > 0; exp *= 10) {
        countingSortByDigit(arr, n, exp);
    }
}



int partition(int arr[],int low,int high){
    int left,right,pivot_item = arr[low];

    left = low;
    right = high;

    while(left < right){
        while(arr[left] <= pivot_item){
            left++;
        }
        while(arr[right] > pivot_item){
            right--;
        }
        if(left < right)
             swap(arr[left],arr[right]);

    }

    arr[low] = arr[right];
    arr[right] = pivot_item;
    return right;
}



void  Quicksort(int arr[],int low,int high){
    int pivot;
    if(high > low){
        pivot = partition(arr,low,high);

        // recvise call
        Quicksort(arr,low,pivot-1);
        Quicksort(arr,pivot+1,high);
    }
}




void merge(int arr[], int leftSize, int rightArr[], int rightSize){
      int* temp = new int[leftSize + rightSize];
    int i = 0, j = 0, k = 0;

    // merge process
    while (i < leftSize && j < rightSize) {
        if (arr[i] <= rightArr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = rightArr[j++];
        }
    }

    // copy remaining elements
    while (i < leftSize) temp[k++] = arr[i++];
    while (j < rightSize) temp[k++] = rightArr[j++];

    // copy back to original array
    for (int m = 0; m < leftSize + rightSize; m++) {
        arr[m] = temp[m];
    }

    delete[] temp;
}


void merge_sort(int arr[],int size){
    int mid;
    if(size == 1){
        return;
    }
    else{
        mid = size/2;
        // recusive call;
        merge_sort(arr,mid);
        merge_sort(arr+mid,size-mid);
        // merge call for merge all elements.
        merge(arr,mid,arr+mid,size-mid);
    }
}


void asecending(int arr[],int size){
    int choice;
    cout <<"Press 1 for sort with bubble sort "<<endl;
    cout<<"Press 2 for sort with selection sort "<<endl;
    cout<<"Press 3 for sort with inseertion sort "<<endl;
    cout<<"Press 4 for sort with shell sort "<<endl;
    cout<<"Press 5 for sort with merge sort "<<endl;
    cout<<"Press 6 for sort with Quick Sort "<<endl;
    cout<<"Press 7 for sort with Counting Sort "<<endl;
    cout<<"Press 8 for sort with Bucket Sort(Bin Sort)"<<endl;
    cout<<"Press 9 for sort with Radix Sort"<<endl;
    cout<<"Press 10 for sort with topological sort"<<endl;
    cout<<"Press 11 for exit the sorting "<<endl;
    int maxVal;
    while(1){

    
        cout<<"Enter Your Choice : ";
        cin>>choice;

        switch(choice)
        {
        case 1:
            /* bubble sort */
            for(int i=0;i<size-1;i++){//number of pass
                for(int j=0;j<size-i-1;j++){//swap need or not 
                    if(arr[j]>arr[j+1]){
                        int temp = arr[j];
                        arr[j] = arr[j+1];
                        arr[j+1] = temp;
                    }
                }
            }
            cout<<"The Sorted array by bubble in asceding order : ";
            for(int i =0;i<size;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        
            break;

        case 2:
            //selection sort
            for(int i =0;i<size -1;i++){
                int min_idx = i;
                for(int j = i+1;j<size;j++){
                    if(arr[j]<arr[min_idx]){
                        min_idx = j;

                    }
                

                }   
            //swapp
                int temp = arr[i];
                arr[min_idx]=arr[i];
                arr[i] = temp;
            
            }

            cout<<"Sorted array by selection sort..";
            for(int i = 0;i<size;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;

        break;

        case 3:
            // insertion sort  
            for(int i = 0;i<size;i++){
                int curr = arr[i];
                int prev = i-1;

                while(prev >= 0 && arr[prev] > curr){
                    arr[prev+1] = arr[prev];
                    prev--;
                }
                arr[prev+1] = curr;

            } 
            cout<<"Sorted array by insertion sort ...";
            for(int i =0;i<size;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
            break;

        case 4:
            // shell sort
            int h,i,j,v;
            for(h = 1;h = size/9;h=3*h+1);

            for(;h>0;h=h/3){
                for(i = h+1;i<size;i++){
                    v=arr[i];
                    j=i;
                      while(j > h && arr[j-h] > v){
                        arr[j] = arr[j-h];
                        j=j-h;
                      }
                      arr[j] = v;
                }
            }

            // for display
            cout<<"Sorted array by shell sort is  : ";
            for(i=0;i<size;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
            break;

        case 5:
            // merge sort divide and conquer techinque!!
            // function call to merge sort
            merge_sort(arr,size);
            // break;
            // display sorted array
            cout<<"Sorted array by merge sort is ....";
            for(int i=0;i<size;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
            break;
        case 6:
            //    Quick Sort
            Quicksort(arr,0,size-1);
            // sorted array

            cout<<"Sorted Array by QUICK SORT : ";
            for(int i =0;i<size;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
            break;

        case 7:
                {
                    int mn = *min_element(arr, arr + size);
                    int mx = *max_element(arr, arr + size);
                    int range = mx - mn + 1;

                    int count[range] = {0};

                    // Step 1: Count frequency
                    for (int i = 0; i < size; i++) {
                        count[arr[i] - mn]++;
                    }

                    // Step 2: Write back into arr[]
                    int idx = 0;
                    for (int i = 0; i < range; i++) {
                        while (count[i] > 0) {
                            arr[idx++] = i + mn;
                            count[i]--;
                        }
                    }

                    cout << "Sorted array by Counting Sort is: ";
                    for (int i = 0; i < size; i++) {
                        cout << arr[i] << " ";
                    }
                    cout << endl;
                 }
                cout<<"Sorted array by Counting Sort is .....";
                for(int i= 0;i<size;i++){
                    cout<<arr[i]<<" ";
                }
                cout<<endl;

              break;
        
        case 8:
                // Bin sort or Bucket Sort t.c : 0(n)
                int bucket[xxx];
                for(int j = 0;j<xxx;j++){
                    bucket[j] = 0;
                }
                for(int i =0;i<size;i++){
                    ++bucket[arr[i]];
                }
                for(int i=0,j=0;j<xxx;j++){
                    for(int k = bucket[j];k>0;--k){
                        arr[i++] = j;
                    }
                }
                cout<<"Sorted array by Bucket sort : ";
                for(int i = 0;i < size;i++){
                    cout<<arr[i]<<" ";
                }
                cout<<endl;
                break;
        case 9:
                    //Radix Sort
                    radixsort(arr,size);
                    cout<<"Array is Sorted by Radix Sort....";
                    for(int i =0;i<size;i++){
                        cout<<arr[i]<<" ";
                    }
                    cout<<endl;
                    break;
        case 10:
                //    topologicalsort
                        // when graph is study then ......   


        case 11:
            cout<<"Program is exit from sort !!";
            return;
            break;
        
        default:
            cout<<"Try angain !!";
            break;
        }
    }
}





void sorting(){
     int size;
     cout<<"Enter a size of array : ";
     cin>>size;
     int arr[size];
     cout<<"Enter elements of array : ";
     for(int i = 0;i<size;i++){
        cin>>arr[i];
     }
     cout<<endl;
    //  orginal array
     cout<<"Entered array is : ";
     for(auto i:arr){
        cout<<i<<" ";
     }
     cout<<endl;
     int choice;
     cout<<"Do you in ascending or descending order ?"<<endl;
      cout<<"Press 1 for ascending order. "<<endl;
      cout<<"Press 2 fro descending order."<<endl;
      cout<<"Press 3 for exit ."<<endl;
      while(1){
      cout<<"Enter order : ";
      cin>>choice;
      switch(choice)
      {
      case 1:
        /* call ascending */
        asecending(arr,size);
         
        break;

     case 2:
        // descending(arr,size);
        break;
     case 3:
         cout<<"thank You "<<endl;
         return;   
      
      default:
      cout <<"Invalid choice"<<endl;
        break;
      }
      }
}

void queu_DB(){
    cout<<"Press 1 to insert data in queue"<<endl;
    cout<<"Press 2 to delete data from queue"<<endl;
    cout<<"Press 3 to display queue"<<endl;
    cout<<"Press 4 for exit"<<endl;
    while(1){
    int choas;
    cout<<"Enter your choice"<<endl;
    cin>>choas;

    char item;
    switch (choas)
    {
    case 1:
        /* code of insert */

            if (rear == xxx - 1) {
            cout << "Queue Overflow! Cannot enqueue more elements.\n";
        
        }
        cout << "Enter a character to enqueue: ";
        cin >> item;
        if (front == -1) front = 0;
        queue[++rear] = item;
        cout << "'" << item << "' has been enqueued.\n";

        break;
    case 2:
    /* code of delete */
                if (front == -1 || front > rear) {
            cout << "Queue Underflow! No elements to dequeue.\n";
                        
        }
        cout << "'" << queue[front++] << "' has been dequeued.\n";
        if (front > rear) front = rear = -1; // Reset after last element is removed

        break;


    case 3:
        /*display of queue*/
            if (front == -1 || front > rear) {
            cout << "Queue is empty.\n";
        }
        cout << "Queue elements are: "<<endl;
        for (int i = front; i <= rear; i++) {
            cout <<queue[i]<<endl;
        }
        cout << endl;

            break; 
            
            
    case 4:
       exit(0);     
    default:
    cout<<"Enter correct!!";
        break;
    }
 }
}


void stack_DB(){
         cout<<"Stack Database"<<endl;
         cout<<"Press 1 for  Insert Number "<<endl;
         cout<<"Press 2 for Delete Number "<<endl;
         cout<<"Press 3 for Display Number "<<endl;
         cout<<"Press 4 for Exit "<<endl;
         cout<<endl;
         while(1){
         int choi;
         cout<<"Enter Your Choice : ";
         cin>>choi;

         int element;

         switch (choi)
         {
         case 1:
            /* code */
                if(top == xxx-1){
                cout<<"Error!! Stack is full";
                return;
            }
           
            cout<<"Enter the element to be pushed: ";
            cin>>element;
            stack[++top] = element;
            cout<<element <<" is successfully pushed to the stack"<<endl;


            break;
         case 2:
         /*code*/
         if(top == -1){
            cout<<"Error!! Stack is empty"<<endl;
         }
         cout<<stack[top]<<" is popped from the stack !!"<<endl;
         top--;
         break;
         
        case 3:
            /*displa code*/
            if(top == -1){
                cout<<"Stack is empty"<<endl;

            }
            cout<<"Stack is : "<<endl;
            for(int i=top;i>=0;i--){
                cout<<stack[i]<<endl;
            }
            break;
          case 4:
          /*exit code*/
          cout<<"Thank You!!";
            exit(0);
            break;
         default:
         cout<<"Invalid choice"<<endl;
            break;
         }

        }
    }



void integerarr_DB(){
        int n;
        cout<<"Enter the size of array : ";
        cin>>n;
        int arr[100];
        cout<<"Enter the elements of array : ";
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<endl;
        cout<<"Given Array is : ";
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        cout<<"Press 1 for Inject number "<<endl;
        cout<<"Press 2 for Delete number "<<endl;
        cout<<"Press 3 for Replace number "<<endl;
        cout<<"Press 4 for Search number "<<endl;
        cout<<"Press 5 for Exit "<<endl;
        cout<<endl;
        int choice;
        while(1){
        cout<<"Enter you Prefeer : ";
        cin>>choice;
        int val;
        int idx;
        int taget;
        bool found;
        
        switch (choice)
        {
        case 1:
            /* code */
        
            cout<<"Enter the index number for inject : ";
            cin>>idx;
 
            cout<<"Enter the value to be injected : ";
            cin>>val;

            //inject code
            for(int i=n;i>idx;i--){
                arr[i]=arr[i-1];
            }
            arr[idx]=val;
            n++;
            cout<<endl;
            cout<<"Array after injection : ";
            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
                }
                cout<<endl;
            break;
        case 2:
          /*code*/
          cout<<"Enter index number  for delete : ";
          cin>>idx;
           for(int i=idx;i<n-1;i++){
            arr[i] = arr[i+1];
            }
            n--;
            cout<<endl;
            cout<<"Array after deletion : ";
            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
             break;
        case 3:
            /*code*/
            cout<<"Enter Index number for Replace : ";
            cin>>idx;
             cout<<endl;
             cout<<"Enter the value to be replaced : ";
             cin>>val;
             arr[idx] = val;

             cout<<endl;
             cout<<"Array after replacement : ";
             for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
             }
             cout<<endl;
             break;
        case 4: 
              cout<<"Enter value of Sreach in array : ";
              cin>>val;
               found = false;
              for(int i=0;i<n;i++){
                if(arr[i]==val){
                    cout<<"Value "<<val<<" found at index "<<i<<endl;
                    found = true;
                    break;
                
                }
              }
               if(!found){
                cout<<"Value "<<val<<" not found in array"<<endl;
               }
              
              break;
        case 5:
        cout<<"Thank You of time";
                exit(0);      
        default:
            break;
        }
    }
    }
void discalmer(){
        cout<<"This program is for only bubble sort,insertion sort,slection sort, "<<endl;
        return;
    }


void linkedlist(){
      int lchoice,lval,pos;
      List l1;
      cout<<"Press 1 for Linked list Insertion at front "<<endl;
      cout<<"Press 2 for Linked List Insertion at end "<<endl;
      cout<<"Press 3 for Linked List Insertion at anywhere "<<endl;
      cout<<"Press 4 for Linked list Deletion from front "<<endl;
      cout<<"Press 5 for linked List Deletion from end "<<endl;
      cout<<"Press 6 for Linked list Deletion from anywhere "<<endl;
      cout<<"Press 7 for Linked List Display "<<endl;
      cout<<"Press 8 for exit the program !!"<<endl;
      cout<<endl;
      while(1){
      cout<<"Enter your Choose : ";
      cin>>lchoice;
        // List l1;
      
      switch (lchoice)
      {

    case 1:
        /* code */
        cout<<"Enter a  value : ";
        cin>>lval;
        l1.push_fornt(lval);
        break;

    case 2:
        cout<<"Enter a value : ";
        cin>>lval;
        l1.push_end(lval);
        break;

    case 3:
        cout<<"Enter a value : ";
        cin>>lval;
        cout<<endl;
        cout<<"Enter a postion(index from 0) : ";
        cin>>pos;
        l1.push_anywhere(lval,pos);
        cout<<lval<<" is added at postion "<<pos<<endl;
        break;

    case 4:
        l1.delete_front();
        cout<<"Successfully delete from front  "<<endl;
        break;
    
    case 5:
        l1.delete_end();
        cout<<"Successfully delete from end "<<endl;
        break;     

    case 6:
        cout<<"Enter a position : ";
        cin>>pos;
        l1.delete_anywhere(pos);
        cout<<"Successfully deleted !!"<<endl;
        break;

    case 7:
        cout<<"List is : ";
        l1.display();
        break;
    case 8:
        cout<<"To main dept.";
        return;

    default:
      cout<<"Try angian !!";
      break;
      }
    }


}

void stack_using_List(){
    List l2;
    int choice,val;
    cout<<"Press 1 for PUSH into stack "<<endl;
    cout<<"Press 2 for POP from stack "<<endl;
    cout<<"Press 3 for DISPLAY the stack "<<endl;
    cout<<"Press 4 for Exit the stack "<<endl;
    while(1){
    cout<<"Enter a Choice : ";
    cin>>choice;

    switch (choice)
    {
    case 1:
        /* code */
        cout<<"Enter a value : ";
        cin>>val;
        l2.push_fornt(val);
        cout<<val<<" is added into stack list "<<endl;
        break;
    case 2:
        l2.delete_front();
        cout<<"Successfully pop from stack list "<<endl;
        break;
    case 3:
        cout<<"Stack is  : "<<endl;
        l2.display();
        break;  

    case 4:
        cout<<"Program is exited !! "<<endl;
        return;
        break;

    default:
            cout<<"Try angain!!"<<endl;
        break;
    }
}   

}

void queue_using_List(){
    List l3;
    int chioce,val;
    cout<<"Press 1 for EnQueue into QUEUE "<<endl;//rear i.e. insert from last
    cout<<"Press 2 for DeQueue from QUEUE "<<endl;//front i.e. delete from front
    cout<<"Press 3 for Display the QUEUE "<<endl;
    cout<<"Press 4 for Exit the QUEUE "<<endl;
    while(1){
    cout<<"Enter a choice : ";
    cin>>chioce;
    switch (chioce){
    case 1:
        /* code */
        cout<<"Enter a value for EnQueue : ";
        cin>>val;
        l3.push_end(val);
        cout<<val<<" is Succefully EnQue into QUEUE !!"<<endl;
        break;

    case 2:
        l3.delete_front();
        cout<<"Succefully DeQue from QUEUE !!"<<endl;
        break;

    case 3:
        cout<<"Queue is : ";
        l3.display();
        break;    
    case 4:
        cout<<"Stack is Exit !!"<<endl;
        return;
        break;
       
    default:
    cout<<"Try anagin !! "<<endl;
        break;
       } 


    }

}

int unorderedSearch(vector<int> vec,int size,int target){
    
    //serach
    for(int i = 0;i<size;i++){
        if(vec[i] == target){
            return i;
        }
    }
    return -1;

}

int orderedSearch(vector<int> vec,int size,int target){
    
    //serach
    for(int i = 0;i<size;i++){
        if(vec[i] == target){
            return i;
        }
    }
    return -1;

}


int binarySearch(vector<int>vec,int size,int target){
    int st=0;
    int end=vec.size()-1;
    // int mid=st+(end-st)/2;

    while(st<=end){
        int mid=st+(end-st)/2;

        if(vec[mid] == target) return mid;
        else if(vec[mid] < target) st=mid+1;//right serach
        else end=mid-1;

        // return -1;
    }

    return -1;
}

int InterploationSearch(vector<int>vec,int size,int target){
    int st=0;
    int end=vec.size()-1;
    // int mid=st+(end-st)/2;

    while(st<=end){
        int mid = st + ((double)(target - vec[st]) * (end - st)) / (vec[end] - vec[st]);

        if(vec[mid] == target) return mid;
        else if(vec[mid] < target) st=mid+1;//right serach
        else end=mid-1;

        // return -1;
    }

    return -1;
}

void sreaching_arr(){
    int choice_search,size,target,m;
    vector<int> vec;

    cout<<"Press  1 for unordered Linear search"<<endl;//O(n)
    cout<<"Press 2 for Ordered Linear Search"<<endl;//O(1)
    cout<<"Press 3 for Binary Search "<<endl;
    cout<<"Press 4 for Interpolation Search "<<endl;
    cout<<"Press 5 for Exit the Search program "<<endl;
    while(1){
        cout<<"Enter a choice  for search  : ";
        cin>>choice_search;
        
        switch (choice_search)
        {
        case 1:
            /* code */
            cout<<"Enter a size of array : ";
            cin>>size;

            vec.resize(size);
            cout<<"Enter a element of array : ";
            for(int i = 0;i<size;i++ ){
                cin>>vec[i];
            }
           
            cout<<"Enter target element you wants to finds : ";
            cin>>target;

            m=unorderedSearch(vec,size,target);
            if( m != -1) 
           cout<<"At index "<<m<<" the "<<target<<" founded !! "<<endl;
           else
            cout<<target<<" not founded !!"<<endl;
            
           break;
        case 2:
            cout<<"Enter a size of array : ";
            cin>>size;

            vec.resize(size);
            cout<<"Enter a element of array : ";
            for(int i = 0;i<size;i++ ){
                cin>>vec[i];
            }
           
            cout<<"Enter target element you wants to finds : ";
            cin>>target;

            m=orderedSearch(vec,size,target);
            if( m != -1) 
           cout<<"At index "<<m<<" the "<<target<<" founded !! "<<endl;
           else
            cout<<target<<" not founded !!"<<endl;
            
           break;

        case 3:
            cout<<"Enter a size of array : ";
            cin>>size;

            vec.resize(size);
            cout<<"Enter a element of array : ";
            for(int i = 0;i<size;i++ ){
                cin>>vec[i];
            }
           
            cout<<"Enter target element you wants to finds : ";
            cin>>target;

            m=binarySearch(vec,size,target);
            if( m != -1) 
           cout<<"At index "<<m<<" the "<<target<<" founded !! "<<endl;
           else
            cout<<target<<" not founded !!"<<endl;
            
           break;

        case 4:
            cout<<"Enter a size of array : ";
            cin>>size;

            vec.resize(size);
            cout<<"Enter a element of array : ";
            for(int i = 0;i<size;i++ ){
                cin>>vec[i];
            }
           
            cout<<"Enter target element you wants to finds : ";
            cin>>target;

            m=InterploationSearch(vec,size,target);
            if( m != -1) 
           cout<<"At index "<<m<<" the "<<target<<" founded !! "<<endl;
           else
            cout<<target<<" not founded !!"<<endl;
            
           break;


        case 5:
           cout<<"You Succefully return from searching algorthims!!THANK YOU!!"<<endl;
           return;      
        default:
        cout<<"Try angain!!"<<endl;
            break;
        }



    }


}

void tress_linked(){
    tree_Node *root = NULL;
    int choice,val;
    cout<<"Press 1 for insert Node"<<endl;
    cout<<"Press 2 for preorder travsal"<<endl;
    cout<<"Press 3 for inorder travsal"<<endl;
    cout<<"Press 4 for postorder travsal"<<endl;
    cout<<"Press 5 for Exit program!!"<<endl;
    while(true){
        cout<<"Enter a Choice : ";
        cin>>choice;
        switch (choice)
        {
        case 1:
            /* code */
            cout<<"Enter a value to insert a node : ";
            cin>>val;
            root = insertNode(root,val);
            break;
        case 2: 
            cout<<"Preorder Travseral : ";
            preorder(root);
            cout<<endl;
            break;
        case 3: 
            cout<<"Inorder Travsal : ";
            inorder(root);
            cout<<endl;
            break;
        case 4:
            cout<<"postorder Travsal : ";
            postorder(root);
            cout<<endl;
             break;
        case 5: 
          cout<<"Exitiing...";
          exit(0);
          break;        
        default:
        cout<<"Try Again!!"<<endl;
            break;
        }

    }
}


int main(){
    cout<<"Press 1 for Integer array "<<endl;
    cout<<"Press 2 for Stack array "<<endl;
    cout<<"Press 3 for Queue array(char) "<<endl;
    cout<<"Press 4 for Linked List "<<endl;
    cout<<"Press 5 for Stack using Linked List "<<endl;//it is LIFO 
    cout<<"Press 6 for Queue using Linked List "<<endl;//it is FIFO
    cout<<"Press 7 for Sorting "<<endl;
    cout<<"Press 8 for Sreaching "<<endl;
    cout<<"Press 9 for Tree "<<endl;
    cout<<"Press 10 for Exit the program !! "<<endl;
    

    while(1){
    int choose;
    cout<<"Enter Your Prefer : ";
    cin>>choose;
    cout<<endl;
    switch (choose)
    {
    case 1 :
        integerarr_DB();
        break;
    case 2:
        stack_DB();
        break;
    case 3:
        queu_DB();
        break;
    case 4:
        cout<<"You Choose LinkedList appliccation "<<endl;
        linkedlist();
         break; 
    case 5:
            cout<<"You Choose a Stack implementation using LINKEDLIST !!"<<endl;
            stack_using_List();
            break;

    case 6:
            cout<<"You Choose a Queue implemenation using LINKEDLIST !!"<<endl;
            queue_using_List();
            break;
            
    case 7:
        discalmer();
        sorting();
       break;

    case 8:
           cout<<"You Choose a Sreaching Application !!"<<endl;
           sreaching_arr(); 
           break;
    case 9: 
            cout<<"You Choose a Tree Application!!"<<endl;
            tress_linked(); 
            break;  

    case 10:
        cout<<"Successfully Exited Program!!"<<endl;
        exit(0);
        break; 

    default:
    cout<<"Try agian!!";
        break;
    }
    }
}