#include<bits/stdc++.h>
using namespace std;
// for monotonic arrays only
int binary_search(int arr[], int n, int key){
    int start=0; 
    int end= n-1;
    int mid = (start+end)/2;
    while( start<=end){
        if( key ==arr[mid]){
           return mid;
        }
        else if(key < arr[mid]){
            end = mid-1;
        }
        else
        {
            start = mid+1;
        }

        mid= ( start+ end)/2;
    }
    return -1;
}
int main(){
   int  even[]= { 2, 3, 4, 5, 6};
    int odd[]= { 3 , 4 , 17, 23, 67, 98};
     
     int key;
     
    cout << "the index is : "<< binary_search( even, 5, 8)<< endl;
       cout << "the index is : "<< binary_search( odd, 6,67);
    return 0;
}