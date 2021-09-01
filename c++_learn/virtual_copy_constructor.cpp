#include <iostream>
using namespace std;

class Fish{
    public:
        virtual Fish* clone() = 0;
        virtual void swim() = 0;
        virtual ~Fish() = 0;
};
class Tuna:public Fish{
    public:
        Fish* clone() override{
            return new Tuna(*this);
        }
        void swim(){
            cout << "Tuna swim"<<endl;
        }
};
class BluefinTuna final: public Fish{
    public:
        Fish* clone() final override{
            return new BluefinTuna(*this);
        } 
};
class Carp final: public Fish{
    public:
        Fish* clone() override{
            return new Carp(*this);
        }
        void swim() override final{
            cout << "Carp swim slow in lake"<<endl;
        }
};
int main(){
    const int NUMBER_FISHES = 4;
    Fish* arr = new Fish[NUMBER_FISHES];
    arr[0] = new Tuna();
    arr[1] = new Carp();
    arr[0] = new BluefinTuna();
    arr[0] = new Carp();

    Fish* myNewFishes[NUMBER_FISHES];
    for(int index = 0; index < NUMBER_FISHES; index++){
        myNewFishes[index] = arr[index]->clone();
    }   
    for(int index = 0; index < NUMBER_FISHES; index++){
        myNewFishes[index]->swim();
    }
    for(int index = 0; index < NUMBER_FISHES; index++){
        delete myNewFishes[index];
        delete arr[index];
    }
}