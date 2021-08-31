#include <iostream>
//via private, Access to Public,Protected section
using namespace std;
class Fish{
    private:
        int priv;
    protected:
        int prot;
    public:
        int pub;
};

class Tuna:private Fish{
    public:
        Tuna(){
            pub = 12;
            prot = 12;
        }
};


int main(){

}