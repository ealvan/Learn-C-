#include <iostream>
using std::cout;
using std::endl;
using std::string;
class A{
    private:
        string name;
    public:
        A(){cout<<"Default Constructor"<<endl;}
        A(const A& sourceObj){
            cout << "Copy Constructot"<<endl;
            name = sourceObj.name;
        }
};
int main(){
    A a;//deafault constructor
    //it's not assignment operator
    //it's copy constructor!!
    A b = a;
}