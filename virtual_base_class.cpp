/*                  student(virtual base class)
                       |
      -----------------------------------               
      |                                 |
     test     [HYBRID INHERITANCE]    sports
      |                                 |       
      -----------------------------------
                       |
                     Result                    
                                        */

   // virtual_base_class saves us from ambiguity of dublication                                    
#include<iostream>
using namespace std;
    class Student{
        protected:
        int rollno;
        public:
        void set_rollno(int a){
            rollno = a;
        }
        void get_rollno(){
          cout<< "Your rollno is:- "<< rollno<< endl;
        }
    };

// inheriting the student class as virtual base class in test class
    class Test: virtual public Student{
      protected:
      float maths,physics;
      public:
      void set_marks( float m1, float m2){
        maths = m1;
        physics = m2;
      }
      void print_marks(){
        cout<<"Marks in maths are "<< maths<< endl
             <<"Marks in physics are "<< physics<< endl;
      }
    };

// inheriting the student class as virtual base class in test class
    class Sports:virtual public Student{
        protected:
        float score;
        public:
        void set_score(float sc){
            score = sc;
        }
        void print_score(){
            cout<<"Your score is:- "<< score<< endl;
        }
    };

    class Result: public Test,public Sports{
        float total;
        public:
        void display(){
           get_rollno();
            print_marks();
            print_score();
            total= maths + physics + score;
            cout<<"Total"<<" "<<total<< endl;
        }
    };
int main(){
    Result O_1;
    O_1.set_rollno(12); // as inherited to acssesd by object of Result class
    O_1.set_marks(98.5,100);
    O_1.set_score(5.5);
    O_1.display();
    return 0; 
}