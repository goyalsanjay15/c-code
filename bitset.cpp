#include<iostream>
using namespace std;

// Function declared for finding total number of bits in any two numbers a, b;
int bit(int a, int b){
    int count =0, sum=0;
    while( a!=0){
     int bit= a&1;
     a=a>>1;
     if(bit==1){
        count ++;
     }
    }
    while(b!=0){
        int i= b&1;
        b=b>>1;
        if( i==1){
            sum++;
        }
    }

    return (count+sum);

}
int main(){
   int a, b;
   cin>>a>>b;
 cout<< "The number of 1's are:"<< bit(a,b);
    return 0;
}