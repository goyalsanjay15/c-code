#include<iostream>
#include<cstring>
using namespace std;
    
int main(){
    char n[23];
    char rev_n[23];
    cout<<"Enter the number:-"<<" "<<endl;
    cin.getline(n,23);
    strcpy(rev_n,n);
    strrev(rev_n);
    cout<<rev_n<<endl;;
  int a= strcmp(rev_n, n);
  cout<<a<<endl;
    if(a==0)cout<<"Yes a Palindrome"<<endl;
    else cout<<"Not a palindrome"<<endl;
        return 0; 
}