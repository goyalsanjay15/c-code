#include<iostream>
using namespace std;
 
 // EVERY FUNCTION RETURNS ONLY ONE VALUE

 // void function do not return anything

 void swap(int &a, int &b){
    int t= b;
    b=a;
    a= t;
    // we cannot return
    // two swapped variables a and b

    /*---------------------------------*/
  /* SO we would pass by reference to 
  actually swap the variables*/
 }

int main(){

int a, b;
cin>> a>> b;
  swap(a,b);
  cout<< a<<" "<< b;
}