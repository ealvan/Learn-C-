#include <iostream>
using namespace std;

class Fish{
    public:
        Fish(){
            cout << "Constructed fish"<<endl;
        }
        virtual ~Fish(){
            cout << "Destructed fish"<<endl;
        }
};

class Tuna:public Fish{
    public:
        Tuna():Fish(){
            cout << "Constructed Tuna"<<endl;
        }
        ~Tuna(){
            cout << "Destructed Tuna"<<endl;
        }
};
void destructFish(Fish* f){
    delete f;//deallocate fish on the heap memory
}
int main(){
    //heap memory
    Tuna *t = new Tuna();
    destructFish(t);
}