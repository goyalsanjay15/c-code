#include <iostream>
using namespace std;
 int main(){
     
int n;
cout<< "enter the int"<< endl;
cin>> n;
// rows
for( int i=1; i<= n; i++){


// 1 to n-i+1 printing
   for( int m=1 ; m<= n-i+1; m++){
        cout << m ;
    }

    // stars printing in the left out space
    for ( int k=2; k<= i; k++){
        cout<<  "**";
    }

// n-i+1 to 1 printing
   
      for ( int j=n-i+1; j>=1; j--){
        cout<< j ;
    }
    cout << endl;
}

 }