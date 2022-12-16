#include <iostream>
using namespace std;

int main()
{
   char n;
   cout<<"enter the char"<< endl;
   cin >> n;
    for( char i= 'A'; i<=n ; i++){
        for (char j= 'A'; j<=n; j++){
            cout << j << " ";
        }

        cout << endl;
    }

}