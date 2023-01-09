#include<iostream>
using namespace std;
class member_1;
class member_2;


// this class should be the friend of class 'member-1' and 'member-2' both
class operations_on_members{
   public:
   int product(member_1 , member_2);
   int addition(member_1 , member_2);
   int subtraction(member_1 , member_2);
   int division(member_1 , member_2);
   int modulation(member_1 , member_2);
};
/*------------------------------------*/
class member_1
{

    // we can also do this  ---> invidually
    // friend int operations_on_members :: product(member_1, member_2); 

    // but forming the whole class as friend;
   friend class operations_on_members;
   int A;
   public :
   void setdata(int a);
   void getdata(void);
};

 void member_1 :: setdata(int a){
    this -> A= a;
 }
 void member_1 :: getdata(){
    cout<< "The value of ist member is  :- "<< A << endl;
 }

/*************************************/
class member_2
{
    // forming the whole class as friend;
  friend class operations_on_members;
  int B;
  public:
  void setdata(int b);
  void getdata(void);
};
 void member_2 :: setdata(int b){
    this -> B= b;
 }
 void member_2 :: getdata(){
    cout<< "The value of 2nd member is  :- "<< B << endl;
 }
 /*---------------------------------*/
 int operations_on_members :: product(member_1 x, member_2 y){
    return ((x.A) * (y.B));
 }

  int operations_on_members :: addition(member_1 x, member_2 y){
    return ((x.A) + (y.B));
 }

 int operations_on_members :: subtraction(member_1 x, member_2 y){
    return ((x.A) - (y.B));
 }

int operations_on_members :: division(member_1 x, member_2 y){
    return ((x.A) / (y.B));
 }
int operations_on_members :: modulation(member_1 x, member_2 y){
   return ((x.A)%(y.B));
}

int main(){
    member_1 x;
    x.setdata(20);
    x.getdata();

    member_2 y;
    y.setdata(4);
    y.getdata();
    
    cout<< "****************************"<< endl;
    operations_on_members r,m,n,q, t;
    int p = r.product( x , y );
    int a = m.addition( x , y );
    int s = n.subtraction( x , y );
    int d = q.division( x , y );
    int M = t.modulation(x,y);

    cout<< "The product of 20 and 4 is " << p<< endl;
    cout<<"PRODUCT DONE"<< endl;
    cout<< "****************************"<< endl;
    cout<< "The addition of 20 and 4 is " << a<< endl;
     cout<<"ADDITION DONE"<< endl;
     cout<< "****************************"<< endl;
    cout<< "The subtraction of 20 and 4 is " << s<< endl;
     cout<<"SUBTRACTION DONE"<< endl;
     cout<< "****************************"<< endl;
    cout<< "The division of 20 and 4 is " << d<< endl;
     cout<<"DIVISION DONE"<< endl;
     cout<< "****************************"<< endl;
    cout<< "The modulation of 20 and 4 is " << M<< endl;
     cout<<"MODULATION DONE"<< endl;
     cout<< "****************************"<< endl;
    return 0;
}