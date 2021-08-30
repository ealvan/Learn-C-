#include <iostream>
#include <string>
using namespace std;
constexpr double getPi(){return 22.0/7;}

class Human{
    private:
        int age1;
    public:
        //constexpr only accept type literals(int,long, char,bool, etc..)
        //not accept object like string, vector, etc...
        constexpr Human(int age):age1(age){}
        constexpr int getAge() const{ return age1;}

};
int main(){
    const double pi = getPi();
    cout << pi << endl;
    constexpr Human h1(21);
    const int hisAge = h1.getAge();
    cout << "La edad es : "<<hisAge<< endl;
    Human another(12);
}