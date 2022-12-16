#include<iostream>
using namespace std;

int main(){

int n;
int x=0;
int digit=0;
cout<< "enter integer "<< endl;
cin>> n;
 while(n!=0){
      digit= n%10;
      // for reversing the digit
      
      x= (x*10)+digit;

n=n/10;

 }
 cout<< x<< endl;






    return 0;
}