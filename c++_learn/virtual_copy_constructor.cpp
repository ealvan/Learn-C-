#include <iostream>
using namespace std;

class Fish{
    public:
        virtual Fish* clone() = 0;
        virtual void swim() = 0;
        virtual ~Fish(){
            cout << "Fish destructor"<<endl;
        };
};

class Tuna: public Fish{
    public:
        Fish* clone() override {
            return new Tuna(*this);
        }
        void swim() final override{
            cout << "Tuna swims fast in the sea"<<endl;
        }
        ~Tuna(){
            cout << "Tuna destructor"<<endl;
        }
};
class BluefinTuna final: public Tuna{
    public:
        Fish* clone() override{
            return new BluefinTuna(*this);
        }
        ~BluefinTuna(){
            cout << "Bluefintuna destructor"<<endl;
        }
};
class Carp final: public Fish{
    public:
        Fish* clone() override{
            return new Carp(*this);
        }
        void swim() override{
            cout << "Carp swims slow in the lake"<<endl;
        }
        ~Carp(){
            cout << "Carp destructor"<<endl;
        }
};

int main(){
    const int FISHES = 4;
    Fish* pecera[FISHES] = {NULL};
    pecera[0] = new Carp();
    pecera[1] = new Tuna();
    pecera[2] = new Carp();
    pecera[3] = new BluefinTuna();
    //clone my pecera, on other pecera
    Fish* clones[FISHES]; 
    for(int i = 0; i < FISHES; i++){
        clones[i] = pecera[i]->clone();
    }
    //swim my clone fishes
    for(int i = 0; i < FISHES; i++){
        clones[i]->swim();
    }
    // delete pecera adn clones fishes
    for(int i = 0; i < FISHES; i++){
        delete clones[i];
        delete pecera[i];
    }
}

