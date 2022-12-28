#include<bits/stdc++.h>
using namespace std;


int main(){
     int n;
     int arr[6]= {1, 2, 3, 5, 4, 2};
      int s=0, e= n-1;
    int mid= s+ (e-s)/2;
    while( s<e){
        if( arr[mid]< arr[ mid+1]){
            s= mid+1;

        }
        else{
            e= mid;
        }
        mid= s+ (e-s)/2;
    }
  
     cout << s<< endl; 
}