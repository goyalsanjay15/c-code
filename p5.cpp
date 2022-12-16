#include <iostream>
using namespace std;

// A B C ; B C D; C D F

int main( ){
   int n;
   cout<< "enter the int"<< endl;
   cin>> n;

   int i=1;
   while ( i<=n){

    /* Make te 1 to A by adding both sides A-1*/

    int j=1; 
    while( j<=n){
        char c= i+j-2+'A';
cout<< c;
       j++; 
    }
    cout << endl;
    i++;
   }
}