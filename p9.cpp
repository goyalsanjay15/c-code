#include <iostream>
using namespace std;

int main(){
int n; 
cout<< "enter the int"<< endl;
cin>> n;

for (int i=1 ; i<= n; i++){
    for( int j=1; j<=n-i; j++){
        cout << " ";
    }

    for (int k=1 ; k<=i; k++){
        cout << "*";    }

        cout << endl ;
}


// ulta pattern is:-
cout << "The pattern is:" << endl;
for( int t=1; t<=n; t++){
    for (int m=1; m<= n-t+1; m++){
        cout<< "*";
    }
    cout << endl;
}


// one more..
cout << " one more..." << endl;

for ( int i=1; i<= n; i++){
    for( int j=1; j<= i-1; j++){
        cout << " ";
    }
    for( int k=1 ; k<= n-i+1; k++){
        cout << "*";
    }
    cout << endl;
}

}