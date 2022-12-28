#include <iostream>
using namespace std;
int main(){
    int arr[]= { 1, 2, 3, 4, 5};
    cout<< arr << endl; // address of arr[0]
    // no need of pointer--> name is a pointer

    int* p = arr;// p pointer storing the address of arr
     cout<< p<< endl; // address of arr
     cout<< p+1<< endl;  // address of arr[1]
     cout<< p+2<< endl;   // p+ i*adrress of arr[0]
     cout<< p+3<< endl;  // adress of arr[3]

// values at adress
      cout<< *p<< endl; // value at arr  1
     cout<<* (p+1)<< endl;  //  value at arr[1]2
     cout<< *(p+2)<< endl;   // p+ i*adrress of arr[0]  3
     cout<<*( p+3)<< endl;  //  value at arr[3] 4
    return 0;
}