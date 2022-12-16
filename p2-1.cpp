#include <iostream>
using namespace std;

//#TYPECASTING USED
int main()
{
    int n;
    cin>> n;

    int i=1;
    while( i<= n){

        int j=1;
        while ( j<=n ){

            // tyecasted
            char c= 'A' +i-1;

// before 'A' +i-1 stored in form of integer 
            cout << c;

            j++;

        }
        cout<< "\n";
        i++;
    }
}
