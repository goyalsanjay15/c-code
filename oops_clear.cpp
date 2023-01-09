#include <iostream>
#include <string>
using namespace std;

class binary
{
    string num;
    // private
    void check_ifBinary(void); // can be used as nested
    /* but if not nested then cannot be used with(.) operator*/

public:
    void read(void);

    void onesComplement(void);
    void display(void);
};
// void read --> another function == (:: ) operator needed

// taking input
void binary ::read()
{
    cout << "Enter a binary num :- " << endl;
    cin >> num;
}

// checking if binary or not
void binary ::check_ifBinary()
{
    for (int i = 0; i < num.size(); i++)
    {
        if (num.at(i) != '0' && num.at(i) != '1')
        {
            cout << "NOT A BINARY NUMBER" << endl;
            exit(0); // exit the program
        }
    }
}

// getting one's complement
void binary::onesComplement()
// Nesting of data members
{
    check_ifBinary(); // secret
    cout << " THE ONE'S COMPLEMENT IS :-" << endl;
    for (int i = 0; i < num.length(); i++)
    {
        if (num.at(i) == '1')
        {
            num.at(i) = '0';
        }
        else
        {
            num.at(i) = '1';
        }
    }
}

// dispaly the number

void binary::display()
{

    for (int i = 0; i < num.length(); i++)
    {
        cout << num.at(i) << " ";
    }
    cout << endl;
}

int main()
{
    binary n;
    n.read();
    // n.check_ifBinary();
    n.display();
    n.onesComplement();
    n.display();
    return 0;
}