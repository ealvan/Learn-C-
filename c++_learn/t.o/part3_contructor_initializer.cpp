#include <iostream>
using std::cout;
using std::endl;
using std::string;

class A{
    public:
        A() = default;
};
class B{
    private:
        int a;
    public:
        //esta clase no 
        //tiene default constructor
        B(int a):a(a){};
};
class C{
    private:
        A a;
        B b;
    public:
        //Constructor Initializers!!
        C():b(b),a(a){}
};