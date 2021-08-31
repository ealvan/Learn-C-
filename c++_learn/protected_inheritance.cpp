#include <iostream>
using namespace std;

class Fish{
    public:
        bool isFreshWater;
        void swim(){};
    private:
        bool priv;
    protected:
        bool protec;    
};
class Carp:protected Fish{
    public:

};
class CarpEvol: public Carp{
    public:
        void taloa(){
            isFreshWater = false;
            protec = true;
            swim();
        }
};
int main(){

}


int main(){

}