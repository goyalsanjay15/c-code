#include <iostream>
#include <cmath>
using namespace std;
class A
{
    static int count;
    int a, b;
    friend A _points(A x, A y);
    // friend class B;
public:
    // constructor
    A(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void display(void)
    {
        ++count;
        cout << "The point is-> " << count << "(" << a << " , " << b << ")" << endl;
    }
};
// reference must be given
int A::count;
A _points(A x, A y)
{
    int m = pow((x.a - y.a), 2);
    int n = pow((x.b - y.b), 2);
    double root = sqrt(m + n);

    cout << root << endl;
}
/*------------------------------*/
// forming class To DO This
/*
class B{
    public:
    void _points(A x, A y)
    {
    A z;
    int m = pow((x.a - y.a), 2);
    int n = pow((x.b - y.b), 2);
    double root = sqrt(m + n);

    cout << root << endl;
    }
};
*/
/*-----------------------------------*/
int main()
{
    A x(1, 2);
    x.display();
    A y(4, 6);
    y.display();
    cout << endl;
    A n(1, 1);
    n.display();
    A m(1, 1);
    m.display();
    cout << endl;
    A z(7, 9);
    z.display();
    A r(1, 1);
    r.display();

    cout << "----------------" << endl;
    cout << "Distance between two points in space is -> " << endl;
    _points(x, y);
    cout << "----------------" << endl;
    cout << "Distance between two points in space is -> " << endl;
    _points(n, m);
    cout << "----------------" << endl;
    cout << "Distance between two points in space is -> " << endl;
    _points(z, r);

    /*----------------------ANOTHER METHOD---------------------*/
    // B w;
    // w._points(x, y);
    return 0;
}