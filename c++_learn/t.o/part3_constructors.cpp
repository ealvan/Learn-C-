#include <iostream>
using std::cout;
using std::endl;
using std::string;
class B{
    public:
        B(){cout << "B created"<<endl;}
};
class A{
    private:
        B b;
    public:
    //en el constructor podemos manejar HEAP y Stack memory
    //para los members
        A(){cout << "A created"<<endl;};
        //A() = delete;//no deseo el default constructor
        //A() = default;//deseo el default constructor
};

int main(){
    A a;
}