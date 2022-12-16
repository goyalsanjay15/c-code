#include<iostream>
using namespace std;

int main(){

    int n=1;

    // continue is not verified in switch
    switch(n){
     case 2: cout<< "ONE"<< endl << endl;;
     case 12 : cout<< "TWELVE"<< endl << endl;
     case 4: cout<< " four"<< endl << endl << endl;
     case 1: cout<< "one "<< endl<< endl;
              break;
     default : cout<< "bye"<< endl;
    }


    return 0;
}