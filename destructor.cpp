#include <iostream>
using namespace std;

class define
{
    static int count;

public:
    // constructor
    define()
    {
        count++;

        cout << "Constructor called"
             << " for"
             << " " << count << endl;
    }

    // ~ destructor -> donot return ,donot take any argument
    ~define()
    {
        cout << "destructor called for " << count << endl;
        count--;
    }
};
// reference to the static variable
int define ::count;
int main()
{
    cout << "inside main   " << endl;
    cout << "object 1" << endl;
    define n_1; // scope only in the main
    cout << "-------------------" << endl;
    {
        cout << "Block" << endl;
        cout << "2nd object " << endl;
        define n_2; // scope only inside the block
        cout << "-------------------" << endl;
        cout << "3rd object " << endl;
        define n_3;
        cout << "-------------------" << endl;
        cout << "Exiting the block" << endl;
        cout << "--------------------" << endl;
    }

    cout << "Ending the scope of 1st N_1" << endl;
}

// as the sdcope of object destroy , compile calls automatically a destructor for them
//  as in the block the scope of n_2 and n_3 ends ,, destructor called for them
//  after that , ending of main function ends the scope of n_1 and destructor called for 1