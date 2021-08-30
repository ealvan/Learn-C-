#include <iostream>

using namespace std;

class Fish{
    protected:
        bool isFreshWater;
    public:
        Fish(bool isFresh):isFreshWater(isFresh){}
        void swim(){
            if(isFreshWater){cout << "Swim in Lake"<<endl;}
            else{ cout << "Swim in Sea"<< endl; }
        }
};
class Tuna: public Fish{
    public:
        Tuna(bool isF):Fish(isF){}
        void swim(){
            cout << "I am a Tuna on Sea"<<endl;
            Fish::swim();//use my superclass method
        }
};
int main(){
    Tuna b(false);
    //only can access VIA public
    //because protected and private only access for inside of class, not main()
    b.Fish::swim();//use my superclass Method!
    b.swim();
    /*
    Carp c(true);
    a.swim();
    b.swim();
    c.swim();
    Fish a(true);    
    */
}
class Carp: protected Fish{
    public:
        Carp(bool isF):Fish(isF){}
        void swim(){
            cout << "I am a Carp on Lake"<<endl;
        }
};



