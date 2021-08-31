#include <iostream>
using namespace std;
//final don't permit inheritance
class Fish/*final*/{
    public:
        void swim(){
            cout << "I swim in pool"<<endl;
        }
};
class Tuna:public Fish{
    public:
        
};

int main(){

}