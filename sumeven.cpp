#include <iostream>
using namespace std;

// sum of even natural numbers
int main(){
   int n; 
   cin>> n;

   int sum=0;

   for( int i=2; i<=n; i=i+2){
    sum= sum+i;
   }
  cout << sum<<endl;


}