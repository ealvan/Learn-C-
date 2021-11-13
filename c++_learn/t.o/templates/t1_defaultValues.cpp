#include <iostream>
using std::cout;
using std::endl;
using std::string;
template<typename T1, typename T2=int>
class A{
    private:
        T1 m1;
        T1 m2;
    public:
        A(const T1& m1,const T2& m2)
        :m1(m1),m2(T2){
            cout << m1 <<" - "<< m2 << endl;
        }
};
template <typename T>
class Shape{
    
};
int main(){
    
}
// template <typename Value=1>
// struct Fibonacci{
//     enum {Result = Fibonacci<Value-1>::Result
//           +
//           Fibonacci<Value-2>::Result};
// };

// template<>
// struct Fibonacci<1>{
//     enum{Result = 1};
// };
// template<>
// struct Fibonacci<0>{
//     enum{Result = 0};
// };

// int main(){
//     int a = Factorial<10>::Const::x;
//     cout << a << endl;
// }