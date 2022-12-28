#include<iostream>
using namespace std;
int main(){
    int a=3;
    int* b= &a;
    /* &a --> Addresss of a  ---> ADDRESSING OPERATOR
    * ---> value at address stored in
    // operator---> DEREFERENCE OPERATOR
      */

     // b--> it is a pointer variable storing
     // the adress of another variable
     cout<< *b<< endl;   // 3 as value at the 
     //address stored in b is 3
      cout<< a << endl;  // 3 is ans
    cout<< b<< endl;   // address of a
    cout<< &a<< endl;  // address of a
    return 0;
}

