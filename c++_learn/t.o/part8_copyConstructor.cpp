#include <iostream>
using namespace std;

class Test{
    public:
    int a;
    Test(int a){
        cout << "Original ctor"<<endl;
        this->a = a;
    }
    Test(const Test& obj){
        cout << "Copy ctor"<<endl;
        a = obj.a;
    }
};

int main(){
    int y = 12;
    Test x(y);
    const int b = 45;
    Test a = 13;
    cout<<x.a<<endl;
    return 0;
}