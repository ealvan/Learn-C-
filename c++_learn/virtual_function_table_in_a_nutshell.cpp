#include <iostream>
using namespace std;

class Base{
    public:
        //My VFT(virtual Function Method)
        virtual void f1(){}
        virtual void f2(){
            cout << "My virtual base method"<<endl;
        }
        virtual void f3(){}
        virtual void f4(){}
        virtual void f5(){}
        virtual void f6(){}
};
class Derived:public Base{
    public:
        //MY derived VFT(virtual Function Method)
        virtual void f1(){
            //override f1();
            cout << "My virtual derived method"<<endl;
        }
        //not implemented f2() 
        virtual void f3(){
            //override f3();
        }
        virtual void f4(){
            //override f4();
        }
};
int main(){
    Derived a;
    a.f2();//My base method
    a.f1();//My derived method
}