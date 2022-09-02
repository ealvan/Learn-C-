#include <iostream>
using namespace std;
template<typename T>
class something{
    public:
        T* link;
        something(T* newlink){
            link = newlink;
        }
        T* getNext(){
            return link;
        }
    string getStr(){
        return "Hola";
    }

};
class person{
    public:
        string name="example";
        string getName(){
            return name;
        }
};
class telephone{};

int main(){
    something<person> a(new person());
    person* b = dynamic_cast<person*> (a.getNext());
    string p = a.getStr();
    cout << p << endl;
    p = b->getName();
    cout << p << endl;
}