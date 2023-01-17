#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  /*Constructor method*/
    // Writing in the file
    string s;
    cout << "Enter a string" << endl;
    getline(cin, s);
    ofstream getout("sample.txt");
    getout << s;
/*
    //Reading in the file
    string m;
      ifstream in("sample.txt");
      getline(in,m);
      cout<<m<<endl;

      //to close a file 
      //   getout.close();*/
      getout.open("sample.txt");
    return 0;
}