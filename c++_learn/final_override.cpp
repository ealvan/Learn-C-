#include <iostream>
using namespace std;
class Fish{
    public:
        Fish(){}
        virtual void swim()   {
            cout << "Fish swim"<<endl;
        }
};
class Tuna:public Fish{
    public:
        Tuna():Fish(){}
        void swim() final override{
            cout << "Tuna swim"<<endl;
        }
};
class BlueFinTuna : public Tuna{
    public:
    // void swim(){
    //     //cannot override
    // }
};
int main(){

}