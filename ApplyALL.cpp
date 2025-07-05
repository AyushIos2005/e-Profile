#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Size of Array : ";
    cin>>n;
    int arr[100];
    cout<<"Enter the number for Array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // Orginal array print
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int s;
    cout<<"Press 1 for inject the value inside the array"<<endl;
    cout<<"Press 2 for delect the value inside the array"<<endl;
    cout<<"Press 3 for replace the value inside the array"<<endl;
    cout<<"Press 4 for Serach the value inside the array"<<endl;
    cout<<"Press any one at a time(1,2,3&4) : ";
    cin>>s;
    int index,value,target;
    switch (s)
    {
    case 1:
            // inject
    
    cout<<"Enter a Index Number For Inject Number"<<"(0 to"<<n-1<<") : ";
    cin>>index;

    //for check5
    
    if(index < 0 || index > n) {
    cout << "Invalid Index!" << endl;
    return 0;
    }

    
    cout<<"Enter a Value For Inject : ";
    cin>>value;

    for(int i=n;i>index;i--){
        arr[i] = arr[i-1];
    }
    //assign value 
    arr[index]=value;
    n++;//size 

    //Update array ;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


    break;

    case 2:
        // for delete
        
    cout<<"Enter a Index Number For Delete Number"<<"(0 to"<<n-1<<") : ";
    cin>>index;

    //for check5
    
    if(index < 0 || index > n) {
    cout << "Invalid Index!" << endl;
    return 0;
    }

    for(int i=index;i<n-1;i++){
        arr[i] = arr[i+1];
    }
    
    n--;//size 

    //Update array ;
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

      break;


    case 3:
        //Replaceing 
         
    cout<<"Enter a Index Number For Replace Number"<<"(0 to  "<<n-1<<") : ";
    cin>>index;

    //for check5
    
    if(index < 0 || index > n) {
    cout << "Invalid Index!" << endl;
    return 0;
}

   
    cout<<"Enter a Value For Replace : ";
    cin>>value;
    
    //assign value 
    arr[index]=value;
    

    //Update array ;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


     break;

    case 4:
        //Linear Serach
    
    cout<<"Enter Number for find : ";
    cin>>target;

    for(int i=0;i<n;i++){
        if(arr[i]== target){
            cout<<arr[i]<<" Found!! at Index "<<i;
        }
        
    }  


     break;
    
    default:
        break;
    }

}