#include<iostream>
#include<string>

using namespace std;
int main(){
    int sec_num;
    cout<<"Enter a second : ";
    cin>>sec_num;
    int sec;
    sec = (sec_num%60);
    int min;
    min = (sec_num % 3600) / 60;
    int hour;
    hour=sec_num/3600;
    cout<<hour<<":"<<min<<":"<<sec<<endl;
  
}