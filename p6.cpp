#include <iostream>
using namespace std;
int main(){

    /* 'A' +i-1*/
    char n;
    cout<< "enter char"<< endl;
    cin>> n;

    cout << " The Patteren is " << ":"  << endl;;

    
    for( char i= 'A'; i<=n; i++){

        for ( char j= ' A'; j<= i;j++){

            cout << i << " ";

        }
        cout << endl;
    }
}