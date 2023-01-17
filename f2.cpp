#include<Iostream>
#include<fstream>
using namespace std;
int  main(){
    /*Using function method*/
    /*  OPEN ( )  function of fstream class is used*/
    ofstream out;
    out.open("sample.txt");
    out<<"Coding in the files - programming "
    <<endl<<"By code with hary"<<endl <<"HI*"<<endl;
    //must close that file
    out.close();  // GOOD PRACTICE
    /*REading the file*/

    ifstream in;
     string s, m, f;
    in.open("sample.txt");
   getline(in,s);
   getline(in,m);
   getline(in,f);
    cout<<s<<endl<<m<<endl<<f<<endl;
     in.close();// GOOD PRACTICE
    return 0;
}