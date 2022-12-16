#include <iostream>
using namespace std;

int main(){

int a[100];

   //  using the {fill_n } command to initialise the array with single number;
      //  fill_n(a,100,3);
      
      // storing the number 3 in the whole arrray
      for(int i=0; i<5; i++){
        a[i] ={6};

      }

      for( int j=0; j< 4; j++ ){
        cout<< a[j] << endl;
      }
    

    return 0;
}