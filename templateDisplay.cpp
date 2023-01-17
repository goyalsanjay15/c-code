#include <iostream>
using namespace std;
template <class T> // now class vector can be used 
// for any data type
class vector
{
public:
    T *arr;
    int size;
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    T dot_product(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += arr[i] * v.arr[i];
        }
        return d;
    }
};
int main()
{
    // data type declartion ?
    vector<double> v_1(4);
    v_1.arr[0] = 1.0;
    v_1.arr[1] = 4.0000;
    v_1.arr[2] = 0.0000;
    v_1.arr[3] = 1.0000;

    vector<double> v_2(4);
    v_2.arr[0] = 5.00;
    v_2.arr[1] = 4.00;
    v_2.arr[2] = 1.2;
    v_2.arr[3] = 1;

    double a = v_1.dot_product(v_2);
    cout << a << endl;
    return 0;
}