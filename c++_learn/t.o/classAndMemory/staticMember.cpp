#include <iostream>
using std::cout;
using std::endl;

class A{
    public:
        static const int a = 1;
        void print(){
            //accediendo de adentro
            cout << a << endl;
        }
};
int main(){
    A a;
    cout <<"Accediendo de afuera: "
    << A::a << endl;
     a.print();
}