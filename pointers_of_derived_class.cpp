#include<iostream>
using namespace std;
    class base{
      int x ;
      public:
      void display(){
        cout<<"*****************************************"<< endl;
        x=23;
        cout<<"the base class function invoked"<<endl;
        cout<<"x is:- "<<" "<<x<<endl;
      }
    };
    class derived :public base{
 int y ;
      public:
      void done(){}
      void display(){
          cout<<"*****************************************"<< endl;
        y=24;
        cout<<"the derived  class function invoked"<<endl;
        cout<<"y is:- "<<" "<<y<<endl;
      }
    };
    int main(){
    //pointer to base class,even pointed towards derived class 
    //object will only invokes the display of base class
    base* base_pointer;
    base object_base;  
    derived object_derived;
    base_pointer = &object_derived;  // pointing the base class pointer to derived class object
    // base_pointer -> x= 24; /*Cannot be acessed  as private member
    base_pointer-> display();  // invokes the base class function even pointed towards derived class 

  //  base_pointer -> done();  // although pointed towards derived class , but cannot aacess the functions of derived class 
    // run time polymorphism -> run time p assigned that jiska pointer usi ke function ko invoke krega 

    derived* derived_pointer;
    derived_pointer = & object_derived;  // need to be pointed as inheritance h ambiguity comes ki kiska bulau
    // derived_pointer = & object_base;  cannot be pointed
    derived_pointer -> display(); // derived clas ke function invoked 

    return 0; 
}