#include<iostream>
using namespace std;
// finding a unique element inan array ----> using xor property
int main(){
    int n;
    cin>>n;
    int arr[10000];
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }
    int ans=0;
    // xor is a bitwise operater
    // xor donot change the number with others
    for( int i=0 ; i<n; i++){
      ans = ans^arr[i];
    }
   cout<< ans<< endl;
   
  
   
}