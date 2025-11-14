#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number of line : ";
    cin>>n;
    cout<<"Pattern is : "<<endl;
    // for(int i=1;i<=n;i++){
    //     if(i % 2 != 0){
    //     for(int j=i;j<=n;j++){
    //         cout<<" ";   
    //     }
    //     for(int k=1;k<=i;k++){
            
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // } 
    // }

// }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<"*" ;
        }
        cout<<endl;
    }


}