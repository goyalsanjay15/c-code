#include<iostream>
#include<fstream>
using namespace std;
    //files se sath khelne ke liye     <fstream>
     //classses usefu; for working with files are
     //1. fstreambase
     //2. ifstream  -->derived from fstreambase
     //3. ofstream  -->derived from fstreambase
    
   //---------------------------------------------
     /*
     two ways to open a file to work with them
     1. using constructor
     2. using the member function "open()" of the class
     */

int main(){
   //Writing in the file using the (ofstream) class.... make an object.
   string s = "Ankita Goyal";
//    ofstream out("sam.text");  // if there is not any file than it would itself created
//    out<<s;

   // READING the file USING   (ifstream) class....make its object
   
   ifstream in("sam.text");
   string m;
  getline(in, s);
  getline(in, m);
  getline(in, m);
  getline(in, m);
  getline(in, m);
   cout<< s<<endl;
    cout<< m<<endl;
     cout<< m<<endl;
      cout<< m<<endl;
       cout<< m<<endl;
        cout<< m<<endl;
    return 0; 

}