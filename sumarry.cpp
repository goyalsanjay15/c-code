#include<iostream>
using namespace std;
int sumarr(int arr[], int n){
        int ans=0;
    for( int i=0; i<n; i++){
        ans= ans+arr[i];
    
    }
    return ans;
}


int main(){
    int n;
    int arr[1000];
    
    cin>>n;
    for( int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<  "The sum of all elements of an array is "<< sumarr(arr, n);
        return 0;
}