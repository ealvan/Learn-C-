#include <iostream>
using namespace std;
class Fish{
    protected:
        bool isFreshWater;//access only a derived classs
    public:
        void swim(){
            if(isFreshWater){
                cout << "Swim in Sea"<<endl;
            }else{
                cout << "Swim in Lake"<<endl;
            }
        }
};
class Tuna:public Fish{
    public:
        Tuna(){
            isFreshWater = true;
        }
};
class Carp:public Fish{
    public:
        Carp(){
            isFreshWater = false;
        }
};

int main(){
    Carp ca;
    Tuna at;
    at.swim();
    ca.swim();
}