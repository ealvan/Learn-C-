#include <iostream>
using namespace std;
//common name ABC(Abstract Base Classes)
class Fish{
    public:
        virtual void swim() = 0;
};
class Tuna:public Fish{
    public:
        void swim(){
            cout << "I swim like a tuna"<<endl;
        }
        
};
class Carp:public Fish{
    public:
        void swim(){
            cout << "I swim like a Carp"<<endl;
        }
};
//MakeFishSwim(Fish&) demonstrate that 
//even if an abstract base class cannot 
//be instantiated, you can use it as a 
//reference or a pointer
void MakeFishSwim(Fish& f){
    //virtual method ensure that use his own method implemented
    //And not virtual method of the baseclass
    f.swim();
}
int main(){
    // compile error: Fish f; // it's a pure virtual class
    Carp c;
    Tuna t;
    MakeFishSwim(c);//i swim like a carp 
    MakeFishSwim(t);//i swim like a tuna
}