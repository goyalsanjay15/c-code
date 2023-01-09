#include<iostream>
using namespace std;

class simple{
    int a;
    int b;
    int c;
    public:
    // Here b and c are default already DECLARED

    //# but when not passed then used the already declared value
    simple(int a,int b=20, int c= 6){
        this->a=a;
        this->b=b;
        this->c=c;
    }
    void printNum(){
        cout<< a<<","<< b<<","<< c<< endl;
    }
};
int main(){

    //When passed used that passed value 
    // but #--> GO TO LINE 11
    simple O_1(2,3);
    O_1.printNum();
    return 0;
}
