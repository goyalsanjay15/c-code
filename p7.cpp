#include <iostream>
using namespace std;

int main(){
    int n;
    cout<< "ENter the int"<< endl;
    cin >> n;
   
    cout << "the pattern is :" << endl;

    for(int i=1; i<= n; i++){

        for ( int j =1; j<= i; j++){
         
          char c= ' A'+ i+j-2;
          cout << c<< " ";
       
            
               

        }
        cout << endl;
    }



}