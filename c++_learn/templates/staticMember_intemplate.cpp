#include <iostream>
using std::cout;
using std::endl;
using std::string;

template<typename T>
class A{
    public:
        static T a;
        T& getStatic(){
            return a;
        }
};
template<typename T> T A<T>::a;
int main(){

    A<int> o1;
    A<int> o11;

    A<string> o2;
    A<string> o22;

    cout << A<int>::a << endl;

    A<int>::a = 12;

    A<string>::a = std::to_string(A<int>::a);;

    cout << o11.getStatic() << endl;
    cout << o22.getStatic() << endl;
}