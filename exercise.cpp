#include<iostream>
#include<cmath>
/*
multilevel inheritance used.
mode public for protected members.
*/
using namespace std;
    class simple_calculator{
     protected:
     int num_1,num_2;
     public:
     void setnum(int a, int b){
        num_1 = a;
        num_2 = b;}
    protected:
    void  product();
    void  division();
    void  Addition();
   void  subtraction();
    };
    void simple_calculator:: product(){
        cout<<"Product is:- "<<num_1*num_2<< endl;
         
    }
    void  simple_calculator:: division(){
        cout<<"Division is:- "<<num_1/num_2<< endl;
      
    }
    void  simple_calculator::  Addition(){
        cout<<"Additiom is:-"<<num_1+num_2<< endl;
         
    }
     void  simple_calculator:: subtraction(){
        cout<< "Subtraction is:- "<< num_1-num_2 << endl;
         
    }
    /*-------------------------------------------*/
    class scientific_calculator: public simple_calculator{
       protected:
       void display(){
       cout<< "Power operation is "<<pow(num_1,num_2)<< endl;
       cout<< "sin of 0 is:- "<<" "<< sin(0)<< endl;
       cout<< "cosine of 0 is:- "<<" "<< cos(0)<< endl;
       cout<< "log operation is :-"<<" "<< log(2.133)<< endl;
       

    }
    };
    class hybrid_calculator : public scientific_calculator{
        public:
        void class_1__class_2(){
            setnum(10,2);
            product();
            Addition();
            subtraction();
            division();
            display();
        }
    };

   
int main(){
    hybrid_calculator O_1;
    O_1.class_1__class_2();

    return 0; 
}
/*------------AMBIGUITY-------------------*/
/*                              //ERROR
class hybrid_calculator : public simple_calculator ,public scientific_calculator{
        public:
        void class_1__class_2(){.
        /*  ------will create error as these functions already in scientic class m aa chuke h
                 aur simple vli m to the hi------------COMPILER CONFUSED-------
            setnum(10,2);
            product();
            Addition();
            subtraction();
            division();
            *//*
            display();
        }
    };
*/