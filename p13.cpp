#include <iostream>
using namespace std;
 int main()
 {
int n;
cout<< "enter the int" << endl;
cin >> n;

for ( int i=1; i<= n; i++){
    for( int j=1 ;j<=n-i; j++){
cout << " ";

    }

    for (int k=i; k>=1; k--){

        cout << k;
    }

    for ( int m=2; m<=i; m++){
        cout << m;
    }

    cout << endl;
}


// one more
cout << endl;
cout << " one more\n";
cout << endl;

for ( int s=1; s<= n; s++){

    for( int q=1; q<= n-s; q++){
        cout << " ";
    }
    for ( int p= 1; p<=s; p++)
    {
        cout << p; 
    }
    for ( int r=s; r>=2; r--){
        cout << r-1;
    }

    cout << endl;
}


 }