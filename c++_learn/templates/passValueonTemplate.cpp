#include <iostream>

using namespace std;
template<typename T, int N, const char* str>
class A{
public:
    T hey;
    A() = default;
    void print(){
        cout << N << endl;
        cout << str << endl;
    }
};
// template <std::basic_fixed_string Str>
// class B{

// };
static const char test[] ="helloWorld!";
int main(){
    std::string aa = "HelloWorld";
    A<int, 12, test> b;
    b.print();
}



