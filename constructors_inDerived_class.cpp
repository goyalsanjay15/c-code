#include<iostream>
using namespace std;
class B1{
     int A1;
     public:
     B1(int a){
        A1= a;
        cout<< "Constructor of base class 1 invoked"<< endl;
     }
     void print1(){
        cout<< "A1 is "<< " "<< A1<< endl;
     }
};
class B2{
 int A2;
 public:
     B2(int a){
        A2= a;
        cout<< "Constructor of base class 2 invoked"<< endl;
     }
     void print2(){
        cout<< "A2 is "<< " "<< A2<< endl;
     }
};
class derived :  public B1 , public B2{
   int data;
   public:
                                  
   // SPECIAL SYNTAX:-            this order doesnot matter
   derived(int a, int b, int c): B1(a), B2(b){
       data= c;
       cout<< "Constructors of derived class invoked "<< endl;
   }
   void printd(){
    cout<<"data"<<" "<<data<< endl;
   }
}; 
int main(){
    derived o(2,4,5);
    //o.print();  // apna bulayage pehle
    o.print1();
    o.print2();
    o.printd();
    return 0; 
}