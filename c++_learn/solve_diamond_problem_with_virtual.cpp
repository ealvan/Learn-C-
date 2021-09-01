#include <iostream>
using namespace std;
class Animal{
    public:
        Animal(){
            cout << "Animal Constructor"<<endl;
        }
        int age;
};
class Mammal:public Animal{
};
class Bird:public Animal{
};
class Reptile:public Animal{
};
class Platypus:public Mammal, public Bird,public Reptile{
    public:
        Platypus(){
            cout << "Platypus constructor"<<endl;
        }
};
int main(){
    Platypus p;
     
    //failure compile: because "age", it's ambiguous.
    //there are 3 superclasses, and all these have a member "int age"
    //for inheritance for baseclass.
    //p.age = 12;
    //Go to solution_diamond_problem.cpp
}
