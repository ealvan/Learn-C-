#include <iostream>
#include <string>
using namespace std;

class Human{
    private:
        friend void display(const Human& data);
        int age;
        string name;
    public:
        Human(string name, int age):age(age),name(name){}

};
void display(const Human& data){
    cout << "Hello I am "<< data.name
    <<" and I have "<< data.age
    <<" years old"<<endl;
}
int main(){
    Human firstMan("Adam",22);
    cout << "Accessing private number via friend function"<<endl;
    display(firstMan);
}