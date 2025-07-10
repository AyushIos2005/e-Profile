#include<iostream>
#include<vector>
#include<climits>
#include<cmath>
using namespace std;  

void print(int arr[],int n){
    cout<<"Your Enter Array : \n";
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
}  

void sorting(){
    cout<<"By Which Process : "<<endl;
    cout<<"Press 1 for Bubble Sort"<<endl;
    cout<<"Press 2 for Insertion Sort"<<endl;
    cout<<"Press 3 for Selection Sort"<<endl;
    int press;
    cout<<"Press any : ";
    cin>>press;
    int size;
    cout<<"Enter size of array : ";
    cin>>size;
    int arr[100];
    cout<<"Enter number for array : ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    print(arr,size);

    switch (press)
    {
    case 1:
            // bubble sort
            for(int i=0;i<size;i++){
                for(int j=0;j<size-1-i;j++){
                    if(arr[j] > arr[j+1]){
                        int temp=arr[j];
                        arr[j]=arr[j+1];
                        arr[j+1]=temp;
                    }
                }
            }
            cout<<"Sort array is : ";
            for(int i=0;i<size;i++){
                cout<<arr[i]<<" ";
            }
        break;
    case 2:
            //Insertion Sort
        for(int i=0;i<size;i++){
       
        int v=arr[i];
        int j = i;
          while(arr[j-1] > v && j >= 1){
            arr[j] = arr[j-1];
            j--;
        }
        arr[j] = v;
        }
         cout<<"Sort array is : ";
            for(int i=0;i<size;i++){
                cout<<arr[i]<<" ";
            }
        break;
      

    case 3:
            // Selection Sort
        for(int i=0;i<size-1;i++){//pass kiye liye
            int min=INT_MAX;
            int mix=-1;

        for(int j=i;j<size;j++){
            if(min > arr[j]){
                min =arr[j];
                mix=j;

            }
        }
        int temp = arr[mix];
        arr[mix]=arr[i];
        arr[i]=temp;

    }

         cout<<"Sort array is : ";
            for(int i=0;i<size;i++){
                cout<<arr[i]<<" ";
            }
        break;
       
        
    default:
        break;
    }

}

void searching(){
    cout<<"By Which Process : "<<endl;
    cout<<"Press 1 for Linear/Sequential Search"<<endl;
    cout<<"Press 2 for Binary Search"<<endl;
    cout<<"-------------------------------------------"<<endl;
    cout<<"Note that: In Binary Search most of the \n array in ascending order else it may be cashed\n";
     cout<<"-------------------------------------------"<<endl;
    int process;
    cout<<"Press any : ";
    cin>>process;
    int n;
    cout<<"Enter Size of array : ";
    cin>>n;
    int arr[100];
    cout<<"\nEnter any array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    print(arr,n);
    int st,target,end;
    switch (process)
    {
    case 1:
        //linear Search....
        cout<<"\nEnter a Number for found : ";
        cin>>target;
        for(int i=0;i<n;i++){
            if(arr[i] == target)
            cout<<arr[i]<<" is found at index "<<i<<endl;
        } 
            break;
    case 2:
    //    Binary Sercah
        cout<<"\nEnter a number for found : ";
        cin>>target;
        st=0;
        end=n-1;
        while(st<=end){
            int mid=(st+end)/2;
            if(arr[mid] == target){
                cout<<arr[mid]<<" is found at index number "<<mid<<endl;
                break;
            }
            else if(arr[mid] < target){
                st=mid+1;
            }
            else{
                end=mid-1;
            }
        }


    default:
        break;
    }
}

int main(){
    cout<<"What are you want to do...\n";
    cout<<"For Searching(Press 1) or soting(Press 2) : "<<endl;
    int n;
    cout<<"Enter Your Pefer Number :- ";
    cin>>n;
    // fun call 1.and 2.
    switch (n)
    {
    case 1:
        searching();
        break;
    

    case 2:
        sorting();  
        break;  
    default:
     cout<<"Out of Scope!!";
        break;
    }
}