#include<iostream>
using namespace std;
// Functio call to itself

int factorial(int n){
   if(n<=1){
    return 1;    
   }
   return n*factorial(n-1);
}
int main(){
   int n;
   cout<< "Enter n:"<< endl;
   cin>>n;
   cout<< "The value of factorial of "<< n<< " is "<< factorial(n);
   
    return 0;
}