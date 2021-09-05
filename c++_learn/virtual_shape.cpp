#include <iostream>
using namespace std;
class Shape{
    public:
        virtual double getArea() = 0;
};
class Circle:public Shape{
    public:
        double getArea() override{
            return 52;
        }
};
class Triangule:public Shape{
    public:
        double getArea() override{
            return 13;
        }
};
int main(){
    Circle a;
    Triangule b;
    cout << "Area 1: "<< a.getArea() << " Area 2: "<< b.getArea() << endl;
}
 