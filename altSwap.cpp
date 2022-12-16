#include<iostream>
using namespace std;

// IN case we pass array to the function we are passing the address of that array ---> CALL BY REFERENCE

void swap_alterntive(int arr[], int n){

// Swap function is the inbuilt function in the cpp
    for( int i=0; i<n; i+=2){
        if( i+1 < n){
            swap( arr[i], arr[i+1]);
        }
    }

}

void print( int arr[], int n){
    for( int i=0 ; i<n; i++){
        cout<< arr[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int arr[1000];
    for( int i=0; i<n; i++)
 {
    cin>>arr[i];
 }

    swap_alterntive( arr, n);
    print( arr, n);
    return 0;
}