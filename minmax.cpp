#include<iostream>
// header file is to be included
#include<bits/stdc++.h>
using namespace std;
 int max( int arr[], int n){

// INT_MIN ---> a value that cannot store any value below this limit
    int max= INT_MIN;
    for( int i=0; i<n; i++){
        if( arr[i]>max){
            max=arr[i];
        }
    }

return max;
 }

int min( int arr[], int n){
int min;

// INT_MAX---> a value that cannot store any value above this limit
  min= INT_MAX;
    for( int i=0; i<n; i++){
        if( arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}

int main(){
    int n;
    cin>>n;
    int arr[10000];
    for( int i=0; i<n; i++){
        cin>>arr[i];
    }
   cout<< "Maximum value "<<max(arr, n)<< " ";
    cout<<"Minimum value is "<< min( arr, n)<< " ";
    
    return 0;

}