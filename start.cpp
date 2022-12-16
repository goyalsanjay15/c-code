#include<iostream>


   // included the header file
/* It already have the DECLARED cout 's  work in it ,
 which can be used without now declaring*/



using namespace std;
/* a standard library*/

/* it denotes that we are
using the namespace standard particularly
 from various namespaces present in c++


Starting from int main....
 flowchart wala start*/


int main(){


    // cout used to output something 
    // << is used to "TO WRITE/TO PRINT" a statement
    //endl used for enter or next line
     // \n does the same work


cout << "Jai Shre Krishna" << endl; 
cout << "Shree shivay namastubhayam" << endl ;

double f =1.23562345666666;
int s1= sizeof(f); 

 // size of float , double , int ,char etc

cout << f << endl;
cout << s1 << " Byte" << endl;

/* int.. is already in form of ....signed int...*/

signed int x = 1;  

//both positive
// and negative numbers could be printed

cout << x ;
unsigned int y = -1;

 /*only positive number
 could be printed , for negative number it
gives the GARBAGE  value;*/


cout << y << " :- Garbage value for unsigned int"<< endl;

/*typecasting*/


int /* iski value --->*/ a = 'a'/* <--  value ko
// typecast kr diya in..?*/;

cout << a << endl;

char c = 64;
cout << c << endl;   
// typecasted 64 int into a character

char m = 1234555555554; 
 /*vaise to overflowed ho hya
 but compiler 
last ki bit utha kr charcter print kr deta uske according...
*/
cout << m<< endl;

 /*2  denotes " smily in chracter"   " 3 denotes dil " */
 char q= 2;
 cout << q<< endl;

 char w= 3;
 cout << w<< endl;


}