#include<iostream>
using namespace std;
    class eleventh{
      int n ;
      public:
      void setN(){
        n=20;
      }
      void getN(){
        cout<< "NO of students 11th"<< " "<< n<< endl;
      }
    };
    class twelveth{
       int m;
      public:
      void setM(){
        m=30;
      }
      void getM(){
        cout<< "NO of students 12th"<< " "<< m<< endl;
      }
    };
    //multiplew inheritance
    class school : public eleventh , public twelveth{
        protected:
        int quiz_result;
        public:
        void know(){
          quiz_result = 11; 
        }
        void get(){
            setN();
            setM();
            getN();
            getM();
            cout<<"Winner is :- "<< quiz_result<< endl;
        }
    };

int main(){
    school o;
    o.know();
    o.get();
    return 0; 
}