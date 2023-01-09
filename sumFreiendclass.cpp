#include<iostream>
using namespace std;

class sumC{
int a,b, c;

// declartion of friend function
/*
friend [class name] [name of freiend function] (class name  parameter , class name parameter)
*/
friend sumC VarSUM(sumC sum_1, sumC sum_2);
public:
  void setData(int a, int b, int c);
  void getData(void);
  void PrintSum(void){
    cout<< "The sum is :- "<< a<< "x"<< " + "<< b<< "y"<< " + "<< c<< "xy"<< endl;
  }
};

void sumC:: setData(int a, int b, int c){
    this->a= a;
    this->b= b;
    this->c= c;
}
 

void sumC:: getData(){
    cout<< "The variable equation is :- "<<a<< "x"<< " + "<< b<< "y"<< " + "<< c<< "xy"<< endl;
}
// definition of friend function
 /*
 class_name  friend_name(){}
 */

sumC VarSUM(sumC sum_1, sumC sum_2){
    sumC sum_3;  // objects of same class
    // sum_2.a--> a of that sum_2 objects is used....
    sum_3.setData((sum_1.a+ sum_2.a), (sum_1.b+ sum_2.b), (sum_1.c+ sum_2.c));
    return sum_3;
}
int main(){
    sumC sum_1, sum_2;
   sum_1.setData(2,3,5);
   sum_1.getData();

   sum_2.setData(10,9,7);
   sum_2.getData();

   VarSUM(sum_1,sum_2).PrintSum();
    return 0;
}