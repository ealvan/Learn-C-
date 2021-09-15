#include <iostream>
using namespace std;
class Fish{
    public:
        Fish(){}
        virtual void swim(){cout << "Fish Swim"<<endl;}
        virtual ~Fish(){};//Never forget "{}" this void implementation
};
class Tuna:public Fish{
    public:
        void swim(){cout << "Tuna Swim"<<endl;}
        void talk(){cout << "I can Talk like Tuna"<<endl;};
};
class Carp:public Fish{
    public:
        void swim(){cout << "Carp Swim"<<endl;}
        void becomeDinner(){cout << "Carp looks delicious and I am hungry!!"<<endl;}    
};
void detectTypeFish(Fish* f){
    Carp* c = dynamic_cast<Carp*>(f);
    if(c){
        c->swim();
        c->becomeDinner();
    }
    Tuna* t = dynamic_cast<Tuna*>(f);
    if(t){
        t->swim();
        t->talk();
    }
    f->swim();//virtual function

}
int main(){
    // when a derived object is passed to function with
    // pointer base parameter, the object conserve his own nature
    // when you dynamically cast this objects, "dynamic_cast"
    // if this Fish* points to Tuna object or Carp object, then return
    // a Valid Address, but if no, returns NULL
    // ALL of this things, happen in Run Time execution.
    // if there are a virtual function, the Fish* object redirect to
    // his own object like Carp::Swim() or Tuna::swim()
    // " redirects the call to the Swim()
    // method implemented in Tuna or Carp, as applicable."
    Tuna t;
    Carp c;
    Fish f;
    detectTypeFish(&t);

    
}