#include<iostream>
using namespace std;
int main(){
int arr[4]= {1, 3, 4, 56};
cout<< arr[0]<< endl;  // garbage value
cout<< &arr[0] << endl;  // address of ist block
// os array
cout<< &arr<< endl;
/***************************************/
// another method to print
// the adress of ist block of array
cout<< arr << endl;

/**************************************/
// arr gives the adress so '*'  is 
//the dereference operator
cout<< *arr<< endl;  // value ist block of
// array

cout<< *arr+1 << endl;  // value +1
cout<< *(arr+1)<< endl;  // value at 2nd block

// pointer++
/*jumping to next block*/




/****************************************/
/******* || arr[i]= *(arr+i) ||   *******/
/******  || i[arr] =*(i+arr) ||  ********/
/*****************************************/

cout<< 3[arr]<< endl;  /*----->    '56'  */
cout<< sizeof(arr)<< endl;  // size of pointer always is '16'


// symbol table cannot be changed so
// arr = arr+1 // give error
/****************************************************************/
/*CHANGING THE VALUE OF ARR IN THE SYMBOL TABLE -->  NOT POSSIBLE*/
/****************************************************************/

// but if int  *p= &arr[0];
// p= p+1  /// can be done
return 0;

}