#include <iostream>
using namespace std;

//forward declartion--> aage h complex class
class complex;

class calculate{
    public:
    int sum(int a, int b){
      return a+b;
    }
    //int sumRealC(complex z1, copmlex z2)   // error as ==> z1 is not introdued <--> class not introdced
    int sumRealC(complex , complex );  
    int sumComplexC(complex , complex );
    };
class complex
{
    int a, b;

    // we have to make the friends individually, we can also make a complete class as friend class
/*
friend int  calculate :: sumRealC(complex , complex );
friend int calculate :: sumComplexC(complex, complex);
*/

// declartion of friend class
friend class calculate;
public:
    
    void setData(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void getData(void)
    {
        cout<< a<<" + "<< b<< "i"<< endl;
    }
};

// definition
int calculate:: sumRealC(complex z1, complex z2){
    return (z1.a+z2.a);
}
int calculate:: sumComplexC(complex z1, complex z2){
    return (z1.b+z2.b);
}

int main()
{
    complex z1, z2;
    z1.setData(1,5);
    z1.getData();
    
    z2.setData(1,2);
    z2.getData();
    
    calculate s;
    int r=s.sumRealC(z1, z2);
    int m= s.sumComplexC(z1,z2);
    cout<<"The sum of real parts is "<< r<< endl<< "The sum of complex parts is " <<m<< endl;

    return 0;
}
