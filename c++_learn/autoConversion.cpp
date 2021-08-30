#include <iostream>
using namespace std;

class Human{
    private:
        int age;
    public:
        explicit Human(int age):age(age){}
        static void doSomething(Human h){
            cout <<"Some guy is doing his homework"<<endl;
        }
         
};

int main(){
    //EXPLICIT CONVERSION
    Human a(12);//Normal use of constructor
    Human b = (Human)13;//explicit conversion
    Human::doSomething(a);//Normal use of member
    Human::doSomething((Human)34);//explicit Conversion
}