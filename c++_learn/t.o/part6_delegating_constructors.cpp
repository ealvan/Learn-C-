#include <iostream>
using std::cout;
using std::endl;
using std::string;
class Person{
    private:
        string name;
        int age;
    public:
        Person(string n, int a):Person(a,n){
            cout << "Initial Constructor "<<
            "delegate to Copy constructor"<<endl;
        }
        Person(int a,string n){
            cout << "Copy constructo delegating..."<<endl;
            name = n;
            age = a;
        }
};
int main(){
    Person a("Pepe",12);
}
