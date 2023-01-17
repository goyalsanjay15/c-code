#include<iostream>
using namespace std;
    
    template<class t_1, class t_2>
    class simple{
       t_1 data_1;
       t_2 data_2;
        public:
        simple(t_1 a,t_2 b){
            data_1 = a;
            data_2 = b;

        }
        void display(){
            cout<<data_1<<" "<<endl<<data_2<<endl;
        }
    };
int main(){
    // class_name<data types> object_name
    simple<char , string> s('b',"4.567");
    s.display();
    return 0; 
}