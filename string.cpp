#include <iostream>
// not in built  ---> header file is to be included

// STRING LENGTH ALSO COUNTS SPACE

#include <string>
using namespace std;

// printing string
int main()
{
    string a = "Hello";
    cout << a << endl;

    // concatenating string
    string b = " world";
    string x = a + b; // + used to concatenate string and, to add numbers;
    cout << endl;
    cout << "concatenated string is:-" << x << endl
         << endl;

    /* Append can also be used for concatenating */
    cout << b.append(a) << endl
         << endl; // stored in string b as b is aage

    // Length of string

    cout << b.length() << endl; // Both can be used for length printing
    cout << a.size() << endl;

    // access the string
    cout << a[1] << endl;

    // changing the particular char in a string
    a[3] = '7';
    cout << a << endl;
    // error generated for specially displaying VIRKINGS in the strings
    /*string y= " we are so called the " virkings" in the string";*/

    // to avoid this

    // we uses backslash , tab, single, doublequote etc
    //  \", \', \\, \t;

    string y = " it\'s all right";
    string z = " it\ts all right";
    string m = " it\"s all right";
    string n = " it\\s all right";
    string l = " it\ns all right";

    cout << y << endl;
     cout << z << endl;

      cout << m << endl;
       cout << n<< endl;
        cout << l << endl;
         
}