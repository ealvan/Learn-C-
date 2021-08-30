#include <iostream>
#include <string>

using namespace std;
class Human{
    private:
        friend class Utils;
        string name;
        int age;
    public:
        Human(string name, int age)
        : name(name), age(age){}
        int getAge() const{
            return age;
        }
        string getName() const{
            return name;
        }
};
class Utils{
    public:
        static void displayInfo(const Human & h){
            cout << h.name <<endl;
            cout << h.age << endl;}};
int main(){
    Human h1("Data",21);
    Utils::displayInfo(h1);
}