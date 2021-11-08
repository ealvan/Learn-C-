#include <iostream>
using std::cout;
using std::endl;

class A{
    private:
        int a{-1};
    public:
        A() = default;
        static inline int sum(A a, A b){
            return a.a+b.a;
        }
};
int main(){
    A a;
    A b;
    //reemplaza la funcion aqui
    //ya realiza la "call function"
    int s = A::sum(a,b);
    cout << s << endl;
}