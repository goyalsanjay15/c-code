#include<iostream>
using namespace std;
    class marks{
        int phy;
        int math;
        public:
        void setData(int a, int b){
            phy = a; math = b;
        }
        void getData(){
            cout<< "Marks in physics are :-"<<" "<< phy;
            cout<<endl;
             cout<< "Marks in math are :-"<<" "<< math;
             cout<< endl;
        }
    };
int main(){
    marks* x= new marks[3];  // array of objects
    int a; int b;
    marks*y = x;
    for(int i=0; i< 3; i++){
        cout<<" enter the  marks in physices  and maths :-"<< endl;
        cin>> a>>b;
        x-> setData(a, b);
        x++;
    }
    for (int i = 0; i < 3; i++)
    {
        y->getData();
        y++;
    }
    
    return 0; 
}