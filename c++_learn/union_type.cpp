#include <iostream>
using namespace std;

union SimpleUnion{
    int num;
    char ch;
};
struct ComplexType{
    enum Type{
        Int,
        Char
    }type;
    union Value{
        int num;
        char ch;
        Value(){}
        ~Value(){}
    }value;
};
void DisplayComplexType(const ComplexType& obj){
    switch(obj.type){
        case ComplexType::Int:
            cout << "My value is: "<< obj.value.num<<endl;
            break;
        case ComplexType::Char:
            cout << "My value is: "<< obj.value.ch << endl;
            break;
    }
}
int main(){
    SimpleUnion u1,u2;
    cout << "SimpleUnion Type:"<<endl;
    cout << sizeof(u1)<<endl;
    cout << sizeof(u2)<<endl;

    cout << "ComplexType size: "<<endl;
    ComplexType c1,c2;

    c1.type = ComplexType::Int;
    c1.value.num = 123321;
    c2.type = ComplexType::Char;
    c2.value.ch = 'C';
    cout << sizeof(c1.value)<<endl;
    cout << sizeof(c2.value)<<endl;

    DisplayComplexType(c1);
    DisplayComplexType(c2);
}
