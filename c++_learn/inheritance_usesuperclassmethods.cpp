#include <iostream>
using namespace std;

class Fish{
    protected:
        bool isFreshWater;
    public:
        Fish(bool isFreshWater):isFreshWater(isFreshWater){ }
        void swim(){
            cout << "Fish swims ... !"<<endl;
        }
        void swim(bool isF){
            if(isF){
                cout << "I swim in Sea"<<endl;
            }else{
                cout << "I swim in Lake"<<endl;
            }
        }
};
class Tuna:public Fish{
    public:
        Tuna(bool isF):Fish(isF){}
        using Fish::swim;
        void swim(){
            cout << "I swim in Tuna lake"<<endl;
        }
};
int main(){
    Tuna f(true);
    f.swim(true);// with "using Fish::swim" unhide methods of Fish::swim
    f.swim(); // only a method overwrite the superclass method, the "Fish::swim()" 
    f.Fish::swim();// access to overwrite method of superclass
    f.Fish::swim(true); // access to hide method of Fish superclass
    
}
