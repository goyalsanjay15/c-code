#include<iostream>
using namespace std;
    
    //multilevel inheritance
    class students{
     protected:
     int rollno=13;
     void setRoll(int a){
       rollno = 13;
     }
     void get(){
        cout<< rollno<< endl;
     }
    };
    class marks : public students{
      protected:
      int marks = 99;
      void print(){
        cout<< "marks" << " for this"<< rollno<<"is"<< marks<< endl;
      }
    };
    class result: public marks{
       protected:
       int percentage = 95;
     public:
       void dispay(){
        cout<< rollno<<" "<< marks<<" "<< percentage<< "%"<<endl;
       }
    };
int main(){
    result O;
    O.dispay();
    return 0; 
}