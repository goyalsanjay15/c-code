#include <iostream>
using namespace std;
class c2;
class c1
{
   //----------pointers--------------
   friend void exchange(c1 *, c2 *);
    //----------References------------
   friend void exchange(c1 &, c2 &);
   int val;

public:
   void indata(int a)
   {
      val = a;
   }
   void display()
   {
      cout << val << endl;
   }
};
class c2
{
   //----------pointers--------------
   friend void exchange(c1 *, c2 *);
   //----------References------------
   friend void exchange(c1 &, c2 &);
   int val2;

public:
   void indata(int a)
   {
      val2 = a;
   }
   void display()
   {
      cout << val2 << endl;
   }
};

void exchange(c1 &x, c2 &y)

{
    cout<<"------------REFERENCE--------------------"<< endl;
   int temp = x.val;
   x.val = y.val2;
   y.val2 = temp;
}



void exchange(c1 *x, c2 *y)
{
   cout<<"------------POINTERS--------------------"<< endl;
   int temp = (*x).val;
   (*x).val = (*y).val2;
   (*y).val2 = temp;
}
int main()
{
   c1 oc1;
   c2 oc2;

   oc1.indata(34);
   oc2.indata(68);
   oc1.display();
   oc2.display();

   //function call donot need any object.
   exchange(oc1, oc2);
   cout << "The swaped value is-- Using Reference" << endl;
   oc1.display();
   oc2.display();


   exchange(&oc1, &oc2);
   cout << "The Again swaped value is-- Using pointers" << endl;
   oc1.display();
   oc2.display();
   return 0;
}