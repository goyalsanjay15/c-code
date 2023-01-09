#include <iostream>
using namespace std;
class test
{
    int a;

public:
    void setData(int a)
    {
        this->a = a;
    }
    void get()
    {
        cout << a << endl;
    }
};
int main()
{/*
    test t;
    // t.setData(2);
    // t.get();
    // can be acssesd using pointers
    test *x = &t;
     (*x).setData(6);
     (*x).get();
    //arrow operator
    x->setData(2);
    x->get();
// another way
     test* x= new test;
    x->setData(6);
    x->get();

*/
    //Array of objects
    test* x= new test[3];
     (x+1)->setData(6);
     (x+1)->get();
   
   // here x , x+1, x+2 are three different objects as we created array of objects
    return 0;
}