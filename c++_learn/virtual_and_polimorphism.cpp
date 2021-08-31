#include <iostream>
using namespace std;

class Fish{
    public:
        virtual void swim(){
            cout << "Fish swim"<<endl;
        }
};
class Tuna:public Fish{
    public:
        void swim(){
            cout << "Tuna swim"<<endl;
        }
};
class Carp:public Fish{
    public:
        void swim(){
            cout << "Carp swim"<<endl;
        }
};
void makeFishSwim(Fish& f){
    f.swim();
}
int main(){
    Carp ca;
    Tuna tu;
    //This behavior, always ensure that this object are
    //Tuna object, if is he?
    //Carp also his behavior always will be Carp behavior
    //And not Fish, because swim() function is "virtual"
    makeFishSwim(ca);
    makeFishSwim(tu);
}