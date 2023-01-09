#include<iostream>
using namespace std;

class shop{
     int item_1;
     int item_2;
     public:
     int  setData(int a, int b);
     void getdata(void);

};

int shop :: setData(int a, int b){
    item_1= a;
    item_2 = b;

}

void shop:: getdata(void){
 
    cout<< "Item_1 __ price "<< item_1<< endl;
    cout<< "Item_2 __ price "<< item_2<< endl;
}
int main(){
    shop clothes;
    clothes.setData(2000, 5000);
    clothes.getdata();
    return 0;
}