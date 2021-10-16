#include <iostream>
using std::cout;
using std::endl;
using std::string;

class Person{
    private:
        string name;
        int age;
    public:
        Person() = default;
        Person(string n, int a):name(n),age(a){}
        Person(const Person& sourceObj){
            cout << "Copy Contructor"<<endl;
            name = sourceObj.name;
            age = sourceObj.age;
        }
        const Person& operator=(const Person& rhs){
            cout << "Assignment Operator"<<endl;
            this->age = rhs.age;
            this->name = rhs.name;
            return *this;//this operator
        }
};
int main(){
    Person a("Bombai",44);
    Person b = a;
}