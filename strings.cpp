#include<iostream>
#include<cstring>
using namespace std;
    
int main(){
    char a[23];
   cin.getline(a,23);
    char b[20];
   cin.getline(b,20);
    cout<< "Operations on string:-"<<" "<<endl;
    cout<<strlen(a)<<endl; // counts spaces but not null character
   cout<< strcat(a,b)<<endl;// to concatinate the string
    strrev(a); // to rev the string
    strrev(b);
    cout<<a<<endl;
    //to compare the string
    int x= strcmp(a,b);  // kyi baar ascii value ka difference deta h 
    // matches char by char
    cout<<x<<endl;// if matched return 0 and if not matched than return +1 or -1 according to the compiler
    // to copy the content of one string to other
    strcpy(a,b);
    cout<<a<<endl;  // done
    return 0; 
}