#include<iostream>
using namespace std;
int  main(){
int a, b;
cin>>a>>b;
int sum=a+b;
int ans=0;
while (sum!=0)
{
    int n=sum%10;
    if(n==2||n==3)
    ans+=5;
    else if(n==4)
    ans+=4;
    sum=sum/10;
}
cout<<ans<<endl;
return 0;
}


