#include <iostream>
using namespace std;

int main(){

int n;
cout<< "enter the int "<< endl;
cin>>n;

for(int i= 1; i<= n; i++){
   // if initialized in the second loop then c remains A , B, C, D ; even increased to 1 
    char c='A'+ n-i;
for( int j=1; j<= i; j++)
{
  cout << c<<" ";
 c++;
}
cout << endl;
}

}