#include <iostream>
using namespace std;
int main(){
   

  //  #1
   //  ---------->   do baar increament ho jayega
  /* for( int i=0; i<=5; i++){
    cout << i << " ";
    i++;
   }*/



//   #2
// ------>     infinite loop
/*
   for( int i=0; i<=5; i--){
    cout << i << " ";
    i++;
   }*/


// #3
//-------> 0, 3, 5, 7, 9, 11, 13, 15
   /*
   for(int i=0; i<=15; i+=2){

    cout << i << " " ;
 
------------------------------------------
 // There is no condition  , so continue for each and every 'i'
------------------------------------------  
    if( i&1 ){
       
        continue;
    }
       i++;

   }*/


// #4
   /*
 for( int i=0; i<5; i++){
    for ( int j=i; j<=5; j++){
        cout << i<< " "<< j<< endl;
    }
 }*/



 // #5
// same aaya output
/*
 for( int i=0; i<5; i++){
    for( int j=0; j<=5; j++){

        if( i+j==10){
            break;
        }

        cout << i<<" "<< j << endl;
    }
 }
*/ 



}