#include<iostream>
using namespace std;

// printing the nCr 

/* Declaring the factorial function*/
int fact(int n){
   int ans=1;
   for( int i=1; i<=n; i++){
    ans =ans *i;
   }
     return ans;  

}
/* declaring the nCr function*/

// AND CALLING THE FACTORIAL FUNCTION
int nCr(int n, int r){
    int x= fact(n);
    int y= fact(r)*fact(n-r);
    int ans= x/y;
    return ans;
} 

// caling the nCr function

int main(){
int n, r;
cout<<" the values if n and r is as follows :  " << endl;
cin>>n>> r;
if( n< r){
    cout<< "INVALID"<< endl;
    exit(0);
}

   int final_ans= nCr(n, r);
 cout<<"The the final ans of nCr is: "<<final_ans << endl;;
    return 0;


}