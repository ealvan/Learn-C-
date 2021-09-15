#include <iostream>
using namespace std;
struct Pizza{
    string name;
    double price;
    char type;
};
int main(){
    // reinterpret_cast is for treat a X object like unrelated object
    // Base* objBase = new Base ();
    // Unrelated* notRelated = reinterpret_cast<Unrelated*>(objBase);
    // The code above compiles, but is not good programming!
    Pizza a = {"De Carne",21.12, 'F'};
    unsigned char* rawData = reinterpret_cast<unsigned char*>(&a);
    cout << rawData << endl;

}