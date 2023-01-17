#include <iostream>
#include <fstream>
using namespace std;
// files se sath khelne ke liye     <fstream>
// classses useful for working with files are
// 1. fstreambase
// 2. ifstream  --> derived from fstreambase
// 3. ofstream  --> derived from fstreambase

//---------------------------------------------
/*
two ways to open a file to work with them
1. using constructor
2. using the member function "open()" of the class
// */
// to close a file we use {objectname.close()}

int main()
{
  // Writing in the file using the (ofstream) class.... make an object.
  string s = "Ankita Goyal";
  //fLOW OF DATA FROM C++ TO FILE SAM.TXT
   //  ofstream out("sam.text");  // if there is not any file than it would itself created
   // out<<s;

  // READING the file USING   (ifstream) class....make its object

/**/
  ifstream in("sam.text");
  string m;
  getline(in, m);
   getline(in, m);
  // getline(in, m);
  // getline(in, m);
  // getline(in, m);
  // getline(in, m);
  cout << m << endl;
  
  // cout << m << endl;
  // cout << m << endl;
  // cout << m << endl;
  // cout << m << endl;
  // cout << m << endl;/**/
  return 0;
}