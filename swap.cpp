#include <iostream>

using namespace std;
void reverese_array( int arr[], int n){
int start =0;
   int end= n-1;
while(start<=end){
    swap(arr[start], arr[end]);
     start++;
     end--;

}
 


}

void printarry(int arr[], int n){
    cout<< "THe reversed array is :-" << endl;
     for( int i=0; i<n; i++ ){
        cout<< arr[i] << " ";
     }
    
}



int main(){
   int n;
   cin>>n;
    int arr[1000];   
    
     for( int i=0; i<n; i++){
        cin>> arr[i];
     }

     reverese_array(arr, n); 

     printarry(arr, n);
    return 0;

}