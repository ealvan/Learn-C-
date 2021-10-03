#include <iostream>
using std::cout;
using std::endl;
using std::string;
class A{
    public:
    ~A(){
        cout << "Destroyed A"<<endl;
    }
};
class B{
    public:
    ~B(){
        cout << "Destroyed B"<<endl;
    }
};
int main(){
    //STACK MEMORY
    B b();//add in the stack
    A a();//add in the stack
    //Automatico borra los objetos
    //HEAP MEMORY
    A *aa = new A;
    B *bb = new B;
    //asegurandose de borralo
    delete aa;//asegurate de borrarlo
    delete bb;
    aa = nullptr;//es buena practica segun el autor
    bb = nullptr;
}