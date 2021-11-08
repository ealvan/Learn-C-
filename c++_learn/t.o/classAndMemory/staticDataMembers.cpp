#include <iostream>
using std::cout;
using std::endl;

class B{
private:
    const int& x;
public:
    B(int &y):x(y){

    }
    const int& getRef(){
        return x;
    }
    void print(){
        cout << x << endl;
    }
};

int main(){
    int a = 12;
    B obj1(a);//ahora guardamos la addressmemory
    obj1.print();//12
    a = 20;
    obj1.print();//20
}