#include <iostream>
using std::cout;
using std::endl;

class Base{
    public:
        virtual void f(){
            cout << "Hola"<<endl;
        }
};
class Derived:public Base{
    public:
        void f() override{
            cout << "Hello"<<endl;
        }
};

int main(){
    Base* a = new Derived();
    a->f();
}
