#include <iostream>
using namespace std;

class school
{
    //int count=0;// different for each object therefore stars with 0 everytime
    string name;
    int standard;
    char grade;
   
    
   static int count;//shared between all the objects Harry, Shivansh, Krishn, Akshita;

public:
    void setdata(void);
    void getdata(void);
};

void school::setdata(void)
{
    cout << "Enter name for child " << count << endl;
    cin>>name;
    cout << "Enter standard for child " << count << endl;
    cin >> standard;
    cout << "Enter grade for child " << count << endl;
    cin >> grade;
   
}

void school::getdata(void)
{
    cout << "Name of child " << count << " is :- " << name << endl;
    cout << "standard for chlid " << count << " is :- " << standard << endl;
    cout << "grade of child " << count << " is :- " << grade << endl;
   
    count++; // increases fior different objects as a single memory is allocated
    // count not different memory to diff objects
    cout << endl;
}

// tell staic member of school class
int school::count;   // to say that count is related to school class
int main()
{
    school Harry, Shivansh, Krishn, Akshita;

    Harry.setdata();
    cout<< "---------"<< endl;
    Harry.getdata();
    cout << "*******************" << endl;
    Krishn.setdata();
     cout<< "---------"<< endl;
    Krishn.getdata();
    cout << "*******************" << endl;
    Shivansh.setdata();
     cout<< "---------"<< endl;
    Shivansh.getdata();
    cout << "*******************" << endl;
    Akshita.setdata();
     cout<< "---------"<< endl;
    Akshita.getdata();

    return 0;
}