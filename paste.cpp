#include <iostream>
using namespace std;
class _CopyCstruct
{
    int a, b, c;

public:
    _CopyCstruct(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
    // User made copy constructor
    // if adress not passed then object will be catched in infinite loop.
    _CopyCstruct(_CopyCstruct &obj)
    {
        a = obj.a;
        b = obj.b;
        c = obj.c;
        cout << "User made copy constructor" << endl;
    }
    void Print(void)
    {
        cout << a << " , " << b << " , " << c << endl;
    }
};
int main()
{
    _CopyCstruct O_1(2, 3, 4); // Already a default constructor ;
    O_1.Print();

    _CopyCstruct O_2(O_1); // Default copy constructor called  -> which copied all the values from O_1 to O_2
    // dies as soon we made user made constructor.
    O_2.Print();

    _CopyCstruct O_3(O_1);
     O_3.Print();
    return 0;
}