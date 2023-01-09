// Classes  = extension of structures
//( Just like the struct[****functions cannot be formed***], but it maintains the privatibility outside the class)
//---> Objects ---> Featues of objects

/*
The private variables acannot be accessed outside the class 
 TO access those data outside the class 
 we  take use of "getter" ( TO GET THE DATA) and "setter"(TO SET THE DATA) functions
 */


/* A, B, C  data members not OBJECTS but these are the data  about the object made by us  'ramesh'*/
#include <iostream>
using namespace std;
class employee{
// can also write private as:-
    private:
int a, b, c;  // Bydefault  private

//public
public:
int d, e; 
void set_data(int a, int b, int c); // To set data
void get_data();// to print data

};

// to instanciate the function ouside the class we use the scope resolution operator(::)
void employee :: set_data(int a, int b, int c){
 /*   "this" is a pointer pointing the address of the "a" initialized as private in the class*/ 
   this -> a=a;
 /*current objects a, b, c used as parameters in the set data function*/
   this -> b=b;
   this -> c=c;
   cout<<   "the pointer to A is THIS , so the value in 'this' is adrees of a "<<this<< endl;
   
}
void employee:: get_data(){
    cout<<"a is "<< a<<", b is "<< " "<< b << ",c is " <<" "<< c<< ",d is "<<" " << d <<",e is "<<" " << e<< " "<<endl;
    cout<< "The adress of A is : " << &a<< endl;
}
int main()
{
    employee ramesh;
    ramesh.d=34;
    ramesh.e= 78;
    //ramesh.a --> this will throw error as a is private
    ramesh.set_data(2,3,4);
    ramesh.get_data();
    cout<< "The value in 'this' and a is same"<< endl;
    return 0;
} 


// classes and objects can be declared along with the classes

/*
 class employee{
  // class declaration
 } harry, ramesh, shivansh;  // objects
*/