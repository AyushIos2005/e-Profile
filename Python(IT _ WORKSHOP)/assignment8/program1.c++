 #include<iostream>
 #include<vector>
 using namespace std;
 int main(){
    vector<int> vec1={91,97,108,121,67,124,51,73,111,57};
    vector<int> vec2={71,75,69,97,70,91,39,61,80,47};
    // vector<int>UV(vec1.size());
    vector<int> U2(vec1.size());
    vector<int> V2(vec1.size());

    cout<<"VEc 1"<<endl;
    for(int i=0;i<vec1.size();i++)
     cout<<vec1[i]-90<<" ";

     cout<<endl<<"vec2"<<endl;
     for(int i=0;i<vec2.size();i++)
     cout<<vec2[i]-70<<" ";

     cout<<endl;
    //  cout<<"vec1*vce2"<<endl;
    //  for(int i=0;i<vec1.size();i++){
 
    //         UV[i] = (vec1[i]-90) * (vec2[i]-70);
    //  }

    //  for(int val : UV){
    //     cout<<val<<" ";
    //  }
//   cout<<"U2"<<endl;
//   for(int i =0 ;i<vec1.size();i++){
//     U2[i] = (vec1[i]-90) * (vec1[i]-90);
//   }
//   for(int val : U2){
//     cout<<val<<" ";
//   }
//   cout<<endl;
//   for(int i =0 ;i<vec1.size();i++){
//     V2[i]=(vec2[i]-70) * (vec2[i]-70);
//   }
//   for(int val : V2){
//     cout<<val<<" ";
//   }
 int sum = 0;

 for(int i =0 ;i<vec1.size();i++){
    sum=sum+((vec1[i]-90)*(vec2[i]-70));
 }
 cout<<sum;
    
 }