#include <iostream>
using namespace std;
class Fish{
    public:
        bool isFreshWater;
        void swim(){

            if(isFreshWater){
                cout << "Swim in Lake"<<endl;
            }else{
                cout << "Swim in Ocean"<<endl;
            }

        }
};
class Tuna: public Fish{
    public:
        Tuna(){
            isFreshWater = false;
        }
};
class Carp: public Fish{
    public:
        Carp(){
            isFreshWater = true;
        }
};
int main(){
    Tuna at;
    at.swim();
    Carp ca;
    ca.swim();
}