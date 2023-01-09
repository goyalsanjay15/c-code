#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    complex(void); // constructor declaration
    complex(int  ,int );
    void printnum(void){
        cout<< " The number is -> "<< a<< " + "<< b<< "i"<< endl;
    }
};
// constructor have no return type
//default as accepts no parameters
complex :: complex(void){
    a = 2;
    b = 5;
}

//parameterized constructor as takes parameters
complex :: complex(int a /*x*/, int b /*y*/){
    // correct chl rha h
    
    this-> a= a;
    this->b=b;
  
  /*
   // chl rha h
     a=x;
     b=y;
*/
    // garbage value
    //a = a;
    //b = b;
}

int main(){
    // default constructor
  complex a;
  a.printnum();


   // parametrized constructor

   cout<<"-------IMPLICIT CALL-------" << endl;
   complex b(2,3);
   b.printnum();

   cout<< "--------EXPLICIT CALL-----"<< endl;
   complex c = complex(3,6);
   c.printnum();

  return 0;
}