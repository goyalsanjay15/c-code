#include<iostream>
using namespace std;

//-------------Function Template--------
template<class t1, class t2>
    float average(t1 x, t2 y){
        return (x+y)/2;
    }
   template<class T>
    void swapp(T &a, T &b){
       T t = a;
        a= b;
        b= t;

    }
int main(){
     
    // now many data types can be used in one function only
    cout<<"average is: "<<average(5,5.5)<<endl;
   
    int x, y; cin>>x>>y;
    swapp(x,y);  // as swap function already in cpp so , it shows overloaded
   cout<<x<<" "<<y;
    return 0; 
}