#include <iostream>
using namespace std;

class A{
    public:
        A(){}
        A(const A& obj){
            cout << "My copy Constructor 'A'" << endl;
        }
        virtual void run() const{
            cout << "I am 'A'" << endl;
        }
};
class B:public A{
    public:
        B():A(){}
        B(const B& obj):A(obj){
            cout << "My Copy Constructor 'B'"<<endl;
        }
         void run() const{
            cout << "I am 'B'" << endl;
        }
};
void f1(const A& obj){
    obj.run();
}
void f2(const A obj){
    obj.run();
}
int main(){
    f1(B());// I am B
    f2(B());//My copy constructor 'A'
            // I am A
}