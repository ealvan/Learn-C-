#include <iostream>
using namespace std;
class Fish{
    public:
        virtual void swim(){
            cout << "I swim like a fish"<<endl;
        }
};
class Tuna:public Fish{
    public:
        void swim() override{
            cout << "Tuna swim really fast"<<endl;
        }
};
int main(){

}