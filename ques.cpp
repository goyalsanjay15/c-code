#include<iostream>
using namespace std;
int main(){

int amount;

cout<< "Enter the amount:"<< endl;

cin>> amount ;

int RS100, Rs50, Rs10, Rs1;

switch (1){
 case 1: 
      RS100= amount/100;
       amount = amount % 100;
        cout<< "No of 100 Rs notes are"<< ":" <<RS100<< endl;  

 case 2: Rs50= amount/50;
         amount = amount % 50;
         cout<< "no of 50 Rs notes are :"<< Rs50<< endl;       
 case 3: Rs10 = amount /10;
          amount = amount % 10;
         cout << "NO of 10 Rs notes are:"<< Rs10<< endl;
  case 4: Rs1=amount /1;
         amount = amount % 1;
         cout<< "No of 1 Rs notes: "<< Rs1<< endl;       










}



    return 0;
}