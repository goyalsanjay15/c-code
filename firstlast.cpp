#include<bits/stdc++.h>
using namespace std;
// Using binary search in monotonic functions
int first_Occ(int arr[],int n, int key ){
    int s= 0 , e= n-1;
    int mid= s+(e-s)/2;
    int ans=0;
     while( s<=e){
        if( key== arr[mid]){
             ans= mid;
            e=mid-1;

        }
       else if(key<mid){
            e= mid-1;
        }
        else{
            s= mid+1;
        }
        mid= s+(e-s)/2;
     }
     return ans;
    
}

int last_Occ(int arr[],int n, int key ){
    int s= 0 , e= n-1;
    int mid= s+(e-s)/2;
    int ans=0;
     while( s<=e){
        if( key== arr[mid]){
             ans= mid;
            s=mid+1;

        }
       else if(key<mid){
            e= mid-1;
        }
        else{
            s= mid+1;
        }
        mid= s+(e-s)/2;
     }
     return ans;
}
     
int main(){
   int arr[18]= {1, 2, 3,  4 ,6, 6, 7, 8 };
   int key;
  
   int p1= first_Occ(arr, 8,7);
   int p2= last_Occ( arr, 8, 7);
   cout << " index of first_Occ is: "<< p1<< endl <<" index of last_Occ is : "<< p2;
   cout<< endl <<" Frequency of Occurence is : "<< (p2-p1)+1;
}