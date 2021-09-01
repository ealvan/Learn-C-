#include <iostream>
using namespace std;
class Animal{
    public:
        int age;
        Animal(){
            cout << "Animal constructor"<<endl;
        }    
};
class Mammal:public virtual Animal{
};
class Bird:public virtual Animal{
};
class Reptile:public virtual Animal{
};
class Platypus:public Mammal,public Bird, public Reptile{
    public:
        Platypus(){
            cout << "I am a platypus"<<endl;
        }
};

int main(){
    Platypus p;
    p.age = 12;
    cout << "Edad: "<<p.age << endl;
}