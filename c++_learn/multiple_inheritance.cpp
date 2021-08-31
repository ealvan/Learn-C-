#include <iostream>
using namespace std;
class Mammal{
    public:
        Mammal(){
            cout << "Mammal! constructor"<<endl;
        }
        void feedwithMilk(){
            cout << "Mammal: Milk for baby"<<endl;
        }
};
class Reptile{
    public:
    Reptile(){
        cout << "Reptile! constructor"<<endl;
    }
        void spitVenom(){
            cout << "Reptile: A enemy, epit my venom"<<endl;
        }
};
class Bird{
    public:
        Bird(){
            cout << "Bird! constructor"<<endl;
        }
        void layEggs(){
            cout << "Bird: Yeah I lay eggs, am lighter now !!"<<endl;
        }
};
class Platypus final: public Mammal, public Reptile,public Bird {
    public:
        Platypus():Reptile(),Mammal(),Bird(){
            cout << "I am a evol Platypus Animal"<<endl;
        }
        void swim(){
            cout << "Platypus: I can swim !!"<<endl;
        }
};

int main(){
    Platypus orni;
}