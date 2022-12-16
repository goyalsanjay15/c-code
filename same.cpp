#include <iostream>
#include <cmath>
using namespace std;
int main(){
      int n;
      int digit=0;
      int ans=0;
      cout<< "enter the number"<< endl;
      cin>>n;
       int i=0;
      while( n!=0){
       digit=n%10;
       ans= (digit*pow( 10, i)) +ans;
       n=n/10;

       i=i+1;
      }
      cout<< ans << endl;
return 0;
}