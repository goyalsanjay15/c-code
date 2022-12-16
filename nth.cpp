#include<iostream>
using namespace std;
int AP(int n){
  int ans = (3*n)+7;

   return ans;
}


int main(){

    int n;
    cout<< "Enter the value of n"<< endl;
    cin>> n;
cout<< AP(n);

    return 0;
}