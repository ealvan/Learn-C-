#include <iostream>
using namespace std;

class Fish{
    public:
        virtual void talk(){
            cout << "I am FISH"<<endl;
        }
};
class Tuna:public Fish{
    public:
        void talk() override{
            cout << "I am TUNA"<<endl;
        }
};
// The override specifier specifies that a 
// virtual function overrides another virtual function.

int main(){
//https://stackoverflow.com/questions/7571294/move-value-from-local-stack-to-heap-c
    //If you create a object in Heap Memory you can't move
    //the same object to stack memory.
    //But you can copy his value 
    Fish* f = new Tuna;//Heap Memory
    Tuna* t = static_cast<Tuna*>(f);//Heap Memory
    t->talk();
    Fish f1;
    f1.talk();
}