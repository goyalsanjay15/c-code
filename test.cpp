#include<iostream>
using namespace std;
class H{
    //int health;//4
    // char c;//1
    // double u; //8
    // long int m;//4
};
int main()
{
    H w;
    // in case of empty class memory allocated to object is :-  1 to keep track of this class
    cout<< sizeof(w);  //24 (when properties assigned)
return 0; 
}