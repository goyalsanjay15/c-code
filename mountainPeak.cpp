#include<bits/stdc++.h>
using  namespace std;
int mountain_Peak(int arr[], int n){
    int s= 0, e= n-1;
    int mid= s+(e-s)/2;

    while(s<e){
        if(arr[mid]< arr[mid+1]){
            s= mid+1;
        }
        else{
            e= mid;
        }
        mid= s+(e-s)/2;
    }
    return s;
}
int main(){
    int arr[7]= {1, 2, 3, 4, 3, 2 , 0};
    cout<< " Mountain peak in the array is at index : "<< mountain_Peak(arr, 7);

}