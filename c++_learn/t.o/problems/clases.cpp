#include <iostream>
using namespace std;

class Mamifero{
    protected:
        int edad;
    public:
        Mamifero():edad(){
            cout << "Mamifero constructor"<<endl;
        }
        ~Mamifero(){
            cout << "Mamifero destructor"<<endl;
        }
        void move() const{
            cout << "Mamifero move one step"<<endl;
        }
        virtual void speak() const{
            cout << "Mamifero speak!"<<endl;
        }
};
class Dog{
    public:
        Dog(){
            cout << "Dog constructor..."<<endl;
        }
        ~Dog(){
            cout << "Dog destructor..."<<endl;
        }
        void move() const{
            cout << "Dog moves 5 steps!..."<<endl;
        }
        virtual void speak() const{
            cout << "Woof!..."<<endl;
        }

};

int main(){


}