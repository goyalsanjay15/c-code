#include <iostream>
using namespace std;

template <class T>
class print
{
    T data;

public:
print();
    print(T a) {
        data = a;
    }
    void display(); // using scope resolution operator
    void funct(T a);
};
/*---How to use the scope resolution operator---*/
template <class T>
 void print<T> :: display(){
cout<<"The value of data is:- "<<data<<endl;
 }

 /*TemplateFunction __overloading*/
  void funct(int a){
    cout<<"The value of a-1 is:- "<<a<<endl;
  }
  template<class T>
  void print<T>::funct(T a){
    cout<<"The value of a is:- "<<a<<endl;
  }
int main()
{
  print <int> o(4);
  o.display();
   
  funct(4); // overloaded-- but ambuiguity resolved as preference to the EXACT MATCH
 o. funct('c');
    return 0;
}