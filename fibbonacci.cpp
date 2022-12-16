#include<iostream>
using namespace std;
int fibb( int n )
{
    if( n==0){
        return 0;
    }
    if( n==1){
        return 1;
    }
     return fibb(n-1)+fibb(n-2);
}

int fib(int a, int b, int m){
   a=0;
   b=1;
   cout<< "0"<< " "<< "1";
   for( int i=3; i<m; i++){
    int next= a+b;
    a=b;
    b=next;
   cout<< " "<< b << " ";
   }

}
int main(){
    int n;
    cin>>n;
    int a,b;
  
    cout<< fibb(n);
    int m;
    cin >> m;
     cout << fib(a,b,m);
     
return 0;
}