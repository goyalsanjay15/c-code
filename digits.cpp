#include <iostream>
using namespace std;
// TAKING THE DIGITS FROM A NUMBER
int main(){
    int n;
    cin>>n;

    // ( product of digits of n)- ( sum of digits of n)

    // for finding digits 
    /*n%10 = last digit
     -----
     usse hta denge
     ------------
     n/10 krke ----------AT LAST------> 
          n becomes 0 , then we have to stop        
        
     will take only the integer value*/
 
 int p=1;
 int s=0;

     while(n!=0){
        int digit= n%10;
        p=p* digit;
        s = s+digit;
        n= n/10;
     }
     cout<< p-s<< endl;





}