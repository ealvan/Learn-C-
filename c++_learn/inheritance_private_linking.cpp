#include <iostream>

using namespace std;
class Fish{
    protected:
        bool isFreshWater;
    public:
        int memberpublic;
        void swim(){
            cout << "Fishs are really fast..." << endl;
        }
};

class Tuna: public Fish{
    public:
        Tuna(){
            memberpublic = 12;
        }
        void swim(){
            cout << "Tuna are really slow..."<<endl;
        }
};

int main(){
    Tuna t;
    t.memberpublic;
    t.Fish::memberpublic;
}