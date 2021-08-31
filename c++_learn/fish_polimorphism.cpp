#include <iostream>
using namespace std;
class Fish{
    public:
        Fish(){}
        void swim(){
            cout << "Fish swim!!"<<endl;
        }
};
class Tuna:public Fish{
    public:
        Tuna(){}
        void swim(){
            cout << "Tuna swim!!"<<endl;
        }
};
void swimmmingAction(Fish& f){
    f.swim();
}
int main(){
    Tuna t;
    t.swim();//Tuna swim
    //this behavior its a Polimorphism
    //This is not a slicing problem
    //because this object it's passed by reference
    //and not by value
    //But you can change this behavior with vertual functions
    //For t, still behave like a Tuna object and not Fish object.
    swimmmingAction(t);//Fish swim
}