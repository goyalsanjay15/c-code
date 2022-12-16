#include<iostream>
using namespace std;
int main(){
int n;
cout<< "enter int"<< endl;
cin>> n;

for(int i=1 ; i<= n; i++){
   
    for (int k=1; k<=i-1; k++){
        cout << " ";
    }
     for( int j=1 ; j<=n-i+1; j++){
        cout << i; 
    }
    cout << endl;
}

// one more ..
cout << " one more    "<< endl;
cout << endl;

for(int i=1; i<=n; i++){

    for ( int k=1; k<= n-i+1; k++){
        cout <<" ";
    }
    for (int j=1 ; j<=i; j++){
        cout << i;
    }

    cout << endl;
}

}