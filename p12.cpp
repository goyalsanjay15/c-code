#include <iostream>
using namespace std;
int main(){
   int n;
   cout<< "enter the int"<< endl;
   cin>>n;

   int x=0;
 for( int i=1 ; i<=n; i++){
    for (int j=1 ; j<=n-i; j++){

        cout << " ";
    }

    for ( int k=1 ;k<=i; k++){
 x=x+1;
        cout << x << " ";
    }
    cout << endl;
 }



}