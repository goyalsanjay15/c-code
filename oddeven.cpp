#include<iostream>
using namespace std;

// Declaring the function for checking the even odd condition;
  
  // Even ---> 1
  // Odd ---> 0
bool isEven( int n){
 
   if( n%2==0){
        return 1;
       }
        return 0;
     }

int main(){
    
    int n;
    cout<< "Enter n"<< endl;
    cin>>n;
   
   // calling the " isEven" function
   cout << isEven(n)<< endl;
    
    
    
    return 0;


}