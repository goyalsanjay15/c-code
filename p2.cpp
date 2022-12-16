#include <iostream>
using namespace std;

// only using the char concept
int main()
{
    // input a character n
    char n;
    cout<< "enter the char"<< endl;
    cin >> n;
//initialized i with char A
    char i='A';
    
    // taken the loop upto the char n
    while( i<= n )
    {

        // initialized with char A and taken it to  char n inputed
        for(char j ='A'; j<=n; j++){

            // printed the i char 
            cout << i << " ";
        }

        // for nextline 
        cout << endl;

        // increses the ASCII value of A to B...
        i++;
    }
}