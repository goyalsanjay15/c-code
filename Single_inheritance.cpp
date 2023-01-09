#include<iostream>
using namespace std;
//-----------------SINGLE INHERITANCE----------------------
//Base class
class base{
 protected:
    int d_1;
    int d_2;
    void setData(int a, int b){
    d_1 = a;
    d_2 = b;
   }
   void getData(void){
    cout<< d_1<<" "<< d_2<< endl;
   }
};
class derived: protected base{
    
    int data;
   
    int seD(int a){
        d_1 = 4;  // can be acessed as private members
        d_2 = 9;
        data = 4;
        return data;
    }
   public:
    void getD(){
        seD(4);
         getData();
        cout<< data;
    }
    float m = 3;
};
int main(){

    derived O2;
   cout<< O2.m<< endl;
    O2.getD();

    return 0; 
}