#include <iostream>
using std::cout;
using std::endl;
using std::string;
class Person{
    //Data members by default is Private in Class,
    int age;//data members
    string name;
    private:
        static const int count{120};//static members
    public:
        Person();
        Person(string name, int age);
        int getAge();//member function
        Person& getObj();
};
Person::Person(){/*Default constructor explicity*/}
Person::Person(string name, int age){
    //The "THIS" operator!!!
    this->name = name;
    this->age = age;
}
int Person::getAge(){return age;}
Person& Person::getObj(){
    return *this;//*this operator help to get object yourself
}
int main(){
    Person uno{"Pepe", 12};
    Person &dos = uno.getObj();
    cout << "Edad: "<<dos.getAge() << endl;  
}