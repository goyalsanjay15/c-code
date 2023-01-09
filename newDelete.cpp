#include<iostream>
using namespace std;
    
int main(){
    //Dynamic memory allocation
int* x = new int;
   *x = 6;
   delete x;
    cout<< *x<< endl;

    //Dynamic array
    int*y= new int[7]{3,7,6,4,0,-7,3};
   cout<< y[0]<<" "<< y[6]<<" "<<y[3]<<" "<<y[1]<<" "<<y[2]<<" "<< y[4]<<" "<<y[5]<<endl;
    delete[] y;  // not completely deletes
     cout<< y[0]<<" "<< y[6]<<" "<<y[3]<<" "<<y[1]<<" "<<y[2]<<" "<< y[4]<<" "<<y[5]<<endl;
    return 0; 
}