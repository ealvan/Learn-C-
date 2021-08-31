#include <iostream>
using namespace std;

class Shape{
    protected:
        string name;
        bool type;//0 :2d, 1 :3d
    public:
        Shape(string name, bool type):name(name),type(type){
        }
};
class Polygon: public Shape{
    protected:
        int sides;
    public:
        Polygon(string n, bool ty, int sides)
        :Shape(n,ty),sides(sides){}
};
class Triangule: public Polygon{
    protected:
        const int sides = 3;
    public:
        friend void printInfo(Triangule tri);
        Triangule(string n,bool t):Polygon(n,t,sides){}
        Triangule(const Triangule& sourceCopy):Polygon(sourceCopy){
            cout << "My copy constructor"<<endl;
        }
        
};
void printInfo(Triangule tri){
    cout << tri.name<<" info:"<<endl;
    cout << "\t # sides : "<< tri.sides << endl;
    cout << "\t Type of shape(1:3d/0:2d): "<< tri.type<<endl;
}
int main(){
    Triangule equal("Isoceles",false);
    printInfo(equal);//copy constructor
}