#include<iostream>
using namespace std;
   class t{
    int a, b;  // yhi pr values assigned
    public:
    // t(int x,int y): a(x),b(x*y)//runs
    //  t(int x,int y): a(x),b(2*y)//runs
    //  t(int x,int y): a(x),b(a*y)//runs
    //  t(int x,int y): b(a*y),a(x)  // runs as a is declared 1st 
 //t(int x,int y): b(x),a(y+b)  // as  a is dec;ared first so
 // when  b ko assign hui usse pehle a ko initialize krna tha jo hua nhi to garbage value comes
t(int x,int y): b(a*y),a(x)
{    cout<<"done"<< endl;
     cout<< a<< " "<<b<< endl;
    }
   }; 
int main(){
    t o(4,5);
    return 0; 
}