#include <iostream>
using namespace std;

class N_1
{
    int n1;
    friend class swap_n1_n2;
public:
    // default constructor
    // invoked automatically when object formed
    N_1(void)
    {
        cout << "n1 is ---> ";
        n1 = 2;
        cout<< n1<< endl;
    }
    void get_n1(void){
        cout<< "The n1 is -> "<< n1 << endl;
    }
   
};

class N_2
{
    int n2;
   friend class swap_n1_n2;
   
public:
    // default constructor
    // invoked automatically when object formed
    N_2(void)
    {
        cout << "n2 is ---> " ;
        n2 = 4;
        cout<< n2<< endl;
    }
    void get_n2(void){
        cout<< "The n2 is -> "<< n2<< endl;
    }
};

class swap_n1_n2{
    public:
    void exchange(N_1 &O1, N_2 &O2); //Reference
    void exchange(N_1 *O1, N_2 *O2);// Pointers
};

void swap_n1_n2:: exchange(N_1 &O1, N_2 &O2){
    int temp = O1.n1;
    O1.n1 = O2.n2;
    O2.n2 = temp;
}
void swap_n1_n2:: exchange(N_1 *O1, N_2 *O2){
    int temp = (*O1).n1;
    (*O1).n1 = (*O2).n2;
    (*O2).n2 = temp;
}


int main()
{
    N_1 O1;
    N_2 O2;
    swap_n1_n2 s, w;

    cout<<"------Reference concept------"<< endl;
    s.exchange(O1, O2);
    cout<< "After swaping, numbers n1 and n2 are-> "<< endl;
    O1.get_n1();
    O2.get_n2();

    cout<< endl<< "__________________________________"<< endl<< endl;
    cout<< "------Pointer Concept------"<< endl;
    w.exchange(&O1, &O2);
    cout<< "After swaping again, numbers n1 and n2 are-> "<< endl;
    O1.get_n1();
    O2.get_n2();

    return 0;
}