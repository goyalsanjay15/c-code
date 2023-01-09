#include<iostream>
using namespace std;

class Rectangle{
    double Length;
    double Bredth;
    public:

    // without parameters constructor
    Rectangle(){
        Length = 3.00;
        Bredth = 1.2;
    }

    // with parameters constructor 
    Rectangle(double a, double b){
        Length = a;
        Bredth = b;
    }

    // parameterized constructor with one argument as default
    /*NOTE-->  DEFAULT means that if not passed as arguments takes the default value*/
    Rectangle (double a){
       Length = a;
       Bredth = 12.20;  //default argument
    }
    void PrintArea(){
        cout<< "Area is "<<Length*Bredth<< endl;
    }
     
};
int main(){
    Rectangle O_1;
    O_1.PrintArea();

    Rectangle O_2(3.12,4);
    O_2.PrintArea();


    Rectangle O_3(5.34);
    O_3.PrintArea();

    return 0;
}