#include <iostream>
using std::cout;
using std::endl;
using std::string;
class C;
class A{
    public:
        static void fooA(C obj){ }
};
class B{
    public:
        void fooB(C c){

        }
};
class C{
    private:
        int tipo{7};
        string info{"ANOM"};
        friend class B;
        friend void A::fooA(C);
        void print(){
            cout << info << endl;
        }
    public:
        
        C() = default;
        
};
int main(){
    C obj1;
    A::fooA(obj1);
    B b;
    b.fooB(obj1);
}