#include<iostream>
using namespace std;

// Base class
class cars{
    int price;
    public:
    string color;
    int model;
    //default constructor needed by the objects of this class
    // as well by the derived class also as--> it formed, default constructor called
     cars(){}
    // user defined constructor
    cars(string s, int m){
        color = s;
        model = m;
        cout<<"Color is :- "<< color<< endl;
         cout<<"model is :- "<< model<< endl;
    }
    void setPrice(int a){
     price = a;
    }
    void getPrice(void){
        cout<< "Price is :- "<< price<< endl;
    }
};
// as the [propertied inherited by derived class]
// we need not to intialize again model and color as already inherited
// Derived class   --> syntax | /* class {{derived_class_name}} : visibility_mode {{base_class_name}}*/ |
class  RollsRoyace: public cars{
  bool open_top;
  public:
  RollsRoyace(){};
  RollsRoyace(int m, string s){
    model= m;
    color = s;
     cout<<"Color is :- "<< color<< endl;
     cout<<"model is :- "<< model<< endl;
  }
  string owner_name = "Ankita Goyal";
  void setopen_top(bool a){
      open_top = a;
    }
    void getopen_top(void){
        if(open_top ==1){
            cout<< "OPEN TOP- "<<"YES Present"<< endl;
        }
        else{
            cout<< "OPEN TOP- "<<"NOT Present"<< endl;
        }
    }
//   price = 3;  private member cannot be acessed
};
int main()
{
    cars n_1("White",2022); // color is :- White \n model is:- 2022
    n_1.setPrice(100000);
    n_1.getPrice(); // price is:- 100000

    //object of derived class;
    cout<<"--------------By Derived class---------------"<< endl;
    RollsRoyace star_1(2021,"Black");  // color is :- Black \n model is:- 2021
    RollsRoyace star_2 ,star_3;
    star_2.owner_name;// Ankita Goyal
    star_3.setopen_top(false);
    star_3.getopen_top();// 1
    cout<< "Price cannot be acessed as Private member of class \"CARS\""<< endl;



return 0; 
}
//properties:-
//visibility mode -> public or private
// bydefault visibility mode is private.
// if public -> all public members(base class)-- public.
// if private-> all public members(base class)-- private. 
// private members cannot be accessed.
//protected members can be inherited but not acessesd directly

/*

     {Members}        |   {publicaly derived} |   {privately derived}|  {protectedly derived} |
----------------------|-----------------------|----------------------|------------------------|
public members        |   public              |     private          |       protected        |
private members       |  not derived          |       not derived    |        not derived     |
protected members     |    protected          |       private        |      protected         |
----------------------|-----------------------|----------------------|------------------------|




*/