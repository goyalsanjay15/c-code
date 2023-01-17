#include <iostream>
using namespace std;
template <class t1 = int, class t2 = float>
class s
{
    t1 a;
    t2 b;

public:
    s(t1 x, t2 y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << a << " " << endl
             << b << endl;
    }
};
int main()
{
    s< float, int> o(4.3987567, 5);
    o.display();
 
 cout<<"-----------Default data types------------"<<endl;
     //Can be empty as default datavtypes already given
     s< > h('A', 5);  //typecasting would occur
    h.display();
    return 0;
}