#include <iostream>
using namespace std;

class Fish{
    public:
        Fish(){
            cout << "\tFish constructor"<<endl;
        }
        ~Fish(){
            cout << "\tFish Destructor"<<endl;
        }
};
class Tuna:public Fish{
    public:
        Tuna(){
            cout << "\tTuna constructor"<<endl;
        }
        ~Tuna(){
            cout << "\tTuna destructor"<<endl;
        }
};
void deleteFishMemory(Fish* f){
    delete f;
}
int main(){
    cout << "Fish on Heap or Free store memory"<<endl;
    Tuna *ptuna = new Tuna();
    deleteFishMemory(ptuna);
    cout << "Fish on Stack Memory"<<endl;
    Tuna mydinner;
}