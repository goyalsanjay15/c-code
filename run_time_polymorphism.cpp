#include<iostream>
using namespace std;
     class base{
      int x ;
      public:
       virtual void display(){
        // mera nhi derived ka run kro agar mera pointer uske object ko point krta h
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
        cout<<endl<<endl<<endl;
          cout<<"*****************************************"<< endl;
        y=24;
        cout<<"the derived  class function invoked"<<endl;
        cout<<"y is:- "<<" "<<y<<endl;
      }
    };
int main(){
    //Run time polymorphism -> object_address binding to a particular function, at rum time is done.
     base* base_pointer;
    base object_base;  
    derived object_derived;
    base_pointer = &object_derived;
    base_pointer-> display(); //function of derived class invoked as the base class function is invoked
    
    return 0; 
}