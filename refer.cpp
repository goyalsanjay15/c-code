#include<bits/stdc++.h>
using namespace std;
void increament(int a , int &b){
    a++;
    b++;
}
int main(){
int n, m;
cin>>n>> m;

// as only the copy is passed in void function 
//and copy is increased by 1


//m is increased but n not increased as
/* in the case of n 
the copy is passed but----> CALL BY VALUE
in case of m the actual address
 is passed---> CALL BY REFERENCE */
increament(n, m);
    cout<< n << " "<< m;
}