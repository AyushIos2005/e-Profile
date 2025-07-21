#include<iostream>
using namespace std;

int fact(int n){
    int mul =1 ;
    
        for(int i=1;i<=n;i++){
            mul = mul * i ;
        }
    
    return mul;
}

int main(){
    int n;
    cout<<"Enter a nth term : ";
    cin>>n;
    float sum =0.0;
    for(int i=1;i<=n;i++){

        sum += (float)i/fact(i);
    }

    cout<<"Sum is : "<<sum;
}