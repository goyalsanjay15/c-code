#include<iostream>
using namespace std;
int sum(int x, int y){
    int c= x+y ;
    return c;
}
void swap_byvalue(int x, int y){
    int t=x;
       x=y;
       y=t;
}

void swap_pointerReference(int *x, int *y){
    int t= *x;
      * x= *y;
      * y=t;
}
void swap_ReferenceVar(int &x, int &y){
    int t=x;
       x=y;
       y=t;
}
int main(){
    
    int a=3; 
    int b= 4;
    cout<< "A is "<< a << " and B is "<< b << endl;

    // call by value
     cout<< "a+b is " << sum(a,b)<< endl;

     // *************call by  value ******************//
     /* not able to swap---> only copy is passed ,
      change in that copy 
     doesnot affect the change in actual parameters. */
     cout<< "--------------- call by value---------"<< endl;
     cout<< a<< b<< endl;
      swap_byvalue(a,b);
      cout<< a<< b<<endl;
      cout<<"not swaped"<<endl;
  /**********************************************************/    
     

     cout<< "---------- BY pointer REFERENCE------------ "<< endl;
     // call by pointerReference
    /* address of variable passed
    ....pointers x and y created to store the adress of a and b
    then changes made in that particular adress */
     cout<< a<< b<<endl;
     swap_pointerReference(&a , &b );
     cout<< a<< b << endl;
      cout<< "swaped"<< endl;
    
    
    cout<< "-------------By reference varible-----------"<< endl;
  cout<< "#THE BESTEST METHOD"<< endl;
   // call by reference varible
   /*variables a and b are refered to x and y...
   then change in x and y will change a and b*/
    cout<< a<< b<< endl;
    swap_ReferenceVar(a,b);
    cout<< a<< b<< endl<< "SWaped"<< endl;
    return 0;
}