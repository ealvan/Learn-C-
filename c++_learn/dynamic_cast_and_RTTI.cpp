#include <iostream>
using namespace std;
class Fish{
    public:
        virtual void swim(){
            cout << "Fish swims really fast"<<endl;
        }
        virtual ~Fish(){}
};
class Tuna: public Fish{
    public:
        void swim() override{
            cout << "Tuna swims really fast in the sea"<<endl;
        }
        void becomeDinner(){
            cout << "Tuna became in dinner to sushi"<<endl;
        }
};
class Carp:public Fish{
    public:
        void swim(){
            cout << "Carp swims slow in the lake"<<endl;
        }
        void talk(){
            cout << "Carp talk with tourists!"<<endl;
        }
};
void sayHello(Fish* fish){
    Tuna* tuna = dynamic_cast<Tuna*>(fish);
    if(tuna){//check if tuna cast succesfully
        tuna->becomeDinner();
    }
    Carp* carp = dynamic_cast<Carp*>(fish);
    if(carp){
        carp->talk();
    }
}
//RTTI means Runtime Type Identification
int main(){
    Carp ca;
    Tuna tu;
    cout << "Carp RTTI example:"<<endl;
    sayHello(&ca);
    cout << "Tuna RTTI example:"<<endl;
    sayHello(&tu);
}