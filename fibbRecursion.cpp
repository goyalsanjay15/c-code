#include<iostream>
using namespace std;
// finding index and the fibbonacci series...
int fibb(int n){
    if(n==1||n==2){
        return 1;
    }
  return fibb(n-1)+fibb(n-2);
    
}
int main(){
    int a,  b,n;
    cout<< "Enter n: "<< endl;  cin>>n;
    cout<< " The fibbonacci series is : "<< endl;
    cout<< " 1 "<< "1 ";
    a=1, b=1;
    for(int i=3; i<n; i++ ){
        int t=a;
        a=b;
        b=t+b;
        cout<< b<< " ";
    }
    int x;
    cout<<endl<< "Enter x: "<< endl;
    cin>> x;
     // ith term
     cout<<"The value at index "<< x<< " is "<< fibb(x);
    return 0;

    /*****************************************/
     // recursion is not good at all times as same function is called a lot of times 
     // iterative more prefered than recursion till my knowledge.
}
