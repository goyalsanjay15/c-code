#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream exit;
    exit.open("sampleFile.txt");
    exit << "Using while loop to "
         << " print the each word ,not want to "
         << "use the getline() baar baar" << endl;
    exit.close();

    // reading using while loop
    ifstream entry;
    entry.open("sampleFile.txt");
    string s;
    // eof() function -- end of file , accessed by the object
  
    while (entry.eof() == 0)
    {
        getline(entry, s);
        cout << s << endl;
    }
    entry.close();
}