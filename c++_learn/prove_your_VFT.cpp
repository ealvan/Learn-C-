#include <iostream>
using namespace std;

class withVirtual{
    private:
        int a,b;
    public:
        virtual void funVirtual(){

        }
};
class withoutVirtual{
    private:
        int a,b;
    public:
        void funNoVirtual(){

        }
};

int main(){
    withVirtual wv;
    withoutVirtual sv;
    cout << "With Virtual : "<< sizeof(wv) << endl;
    cout << "Without Virtual : "<< sizeof(sv) << endl;
}