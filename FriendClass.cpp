#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    void setNumber(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    friend complex sumComplex(complex Z1, complex Z2);
    void printNumber(void)
    {
        cout << "The complex no is " << a << " + " << b << "i" << endl;
    }
    void sumPrint()
    {
        cout << "The sum of  complex no is " << a << " + " << b << "i" << endl;
    }
};

// friend function which is not a part of "complex" class but can access the private data members of this class
complex sumComplex(complex Z1, complex Z2)
{
    complex Z3;
    Z3.setNumber((Z1.a + Z2.a), (Z1.b + Z2.b));
    return Z3;
}

int main()
{
    complex Z1, Z2;
    Z1.setNumber(2, 5);
    Z1.printNumber();

    Z2.setNumber(4, 7);
    Z2.printNumber();

    sumComplex(Z1, Z2).sumPrint();
    return 0;
}

/*
1. not in scope of complex class
2. can be accessed without dot operater;
3. class ke ander ek baar friend likh do;
4. private members cannot be used simply -- throuth its data members;
5. Friend function as private or public;
6. contains objects as arguments;
7. can be invoked without objects;
8. cout<< a in friend function == invalid;
*/