#include <iostream>
using namespace std;
int main(){
int n;
cout<< "enter int"<< endl;
 cin >> n;

 // ulta pattern


 cout << " the ulta pattern is :"<< endl ;
 for( int i=1 ; i<= n; i++){
    char c='A' +n-i;
for ( int j=1 ; j<=n; j++){
     cout << c<< " ";
     c++;
}
cout << endl;
 }
 // sidha pattern


 cout << " the sidha pattern is :"<< endl;
for( int i=1 ; i<= n; i++){
    char c='A' +i -1;
for ( int j=1 ; j<=n; j++){
     cout << c<< " ";
     c++;
}
cout << endl;
 }
 
 


}