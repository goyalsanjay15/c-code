#include<bits/stdc++.h>
using namespace std;

int main(){
   string s;
   getline(cin, s);
   string m;

/*........................................................................................*/
/*========================================================================================*/
// This method is not good as are adding the
//character to a string;
/*=======================================================================================*/
  /* for( int i= s.size()-1; i>=0; --i){
   // cout<<s[i];
     m= m+s[i];   // HERE
   }
    cout<< m;*/
/*......................................................................................*/


/*--------------------------------------------------------------------------------------------------*/
    // so we use the push_back function to enter the character to the last of a string like this:
/*--------------------------------------------------------------------------------------------------*/
   /* for( int i=0; i<=s.size(); i++){
           m.push_back(s[s.size()-i]);
              }
              cout<< m;*/

/*----------------------------------------------------------------------------------------------------*/


/*---------------NEXT----------------------------------------------PART---------------------------------*/

/***********************************************************************************************************/

// WHEN we have to enter the big numbers 
/* WE cannot use even long long int to store them as they are out of range
 THEREFORE < WE USE THE 'STRINGS"   to input them

 but to print enter the inter from them out we have to use all the string operations
 have to treat them as STRING

       example------

       we want 6 
       so we first we gwet that char only by simple method 
       as we print it we get its ascii value
       to get the integer we minus it with the char 0 {ASCII value of 0}

*/
int l;
for( int i=s.size() -1; i>=0; i--){
       l= s[i]-'0';
cout<< l;}
    return 0;
/*----------------------------------------------------------------------------------------------*/

    // char arrays is the string in indirect way
}
