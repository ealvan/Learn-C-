#include <iostream>
using namespace std;
class Fish{
    protected:
        bool isFreshWater;
    public:
        Fish(bool isFreshWater):isFreshWater(isFreshWater){}
        void swim(){
            if(isFreshWater){
                cout << "Swim in sea"<<endl;
            }else{
                cout << "Swim in lake"<<endl;
            }
        }
};
class Tuna:public Fish{
    public:
        Tuna(bool isFreshWater):Fish(isFreshWater){}
};

class Carp:public Fish{
    public:
        Carp(bool isFreshWater):Fish(isFreshWater){}
};

int main(){
    Carp ca(false);
    Tuna at(true);
    ca.swim();
    at.swim();
}