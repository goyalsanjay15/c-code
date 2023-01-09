#include <iostream>
using namespace std;
class BankDeposit{
    double Principal;
   double years;
   double interestrate;
   double CurrBal;
    public:
    BankDeposit(){cout<< "PROCESSING......."<< endl;}  // empty constructor as if objects formed
    // without giving values dynamically then constructor of default type would not be found
    //and will throw an error --> SO IT IS...
    BankDeposit(int p, int y, int r);
    BankDeposit(int p, int y, float r);
     BankDeposit(int p, float y, float r);
      BankDeposit(int p, float y, int r);
    
    void CurrentAmount(){
        cout<< "Your Current Balance is :- "<<CurrBal<< endl;}
};

BankDeposit :: BankDeposit(int p, int y, int R)
{
    Principal = p;
    years = y;
    interestrate = R;
   CurrBal= Principal+((Principal*years*interestrate)/100);
}
BankDeposit :: BankDeposit(int p, int y, float r)
{
    Principal = p;
    years = y;
    interestrate = r;
    CurrBal= Principal+ (Principal*years*interestrate);
   
}
BankDeposit :: BankDeposit(int p, float y, float r)
{
    Principal = p;
    years = y;
    interestrate = r;
   CurrBal= Principal+ (Principal*years*interestrate);
   
   
}
BankDeposit :: BankDeposit(int p, float y, int R)
{
    Principal = p;
    years = y;
    interestrate = R;
   CurrBal= Principal+( (Principal*years*interestrate)/100);
   
   
}
int main()
{
    BankDeposit B_1;
    // if the constructor in line 9 was absent then these objects will throw error 
    // compiler knows according to the arguments we passed.

   int p,R;
   float r,y;
   cout<< "-------------------------------"<< endl;

   cout<< "enter p, y, int R"<< endl;
   cin>>p>>y>>R;
   B_1 = BankDeposit(p,int(y),R);
   B_1.CurrentAmount();
   cout<< "-------------------------------"<< endl;

   

   cout<< "enter p, y,float r"<< endl;
   cin>>p>>y>>r;
   B_1 = BankDeposit(p,int(y),r);
   B_1.CurrentAmount();
   cout<< "-------------------------------"<< endl;

   cout<< "enter p, float y,float r"<< endl;
   cin>>p>>y>>r;
   B_1 = BankDeposit(p,y,r);
   B_1.CurrentAmount();
   cout<< "-------------------------------"<< endl;

   cout<< "enter p, float y,int R"<< endl;
   cin>>p>>y>>R;
   B_1 = BankDeposit(p,y,R);
   B_1.CurrentAmount();
   cout<< "-------------------------------"<< endl;
    return 0;
}
