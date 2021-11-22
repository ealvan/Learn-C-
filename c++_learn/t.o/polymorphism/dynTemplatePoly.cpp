#include <iostream>
using std::cout;
using std::endl;
template<typename T>
class Base{ 
    public:
        void f(){
            static_cast<T*>(this)->f();
        }

};

class Child:public Base<Child>{
    public:
        void f(){
            cout << "Hello"<<endl;
        }
};
int main(){
    Base<Child>* a = new Child();
    a->f();
}