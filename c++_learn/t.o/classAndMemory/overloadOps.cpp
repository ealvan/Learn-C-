#include <iostream>
#include <sstream>
using std::cout;
using std::endl;
using std::string;

class A{
    private:
        int m;
    public:
        explicit A(int a):m(a){}
        A operator++(int){
            m++;
            return (A)m;//EXplicit Conversion
        }
        A operator--(int){
            m--;
            return (A)m;
        }
        A operator+(A o1){
            A rst =(A) (o1.m + m);
            return rst;
        }
        A operator-(A o1){
            A rst =(A) (m - o1.m);
            return rst;
        }
        bool operator==(const A& o1){
            return o1.m == m;
        }
        bool operator!=(const A& o1){
            return !(*this == o1);
        }
        bool operator<(const A& o1){
            return m < o1.m;
        }
        bool operator>(const A& o1){
            return !(*this < o1);
        }
        void operator+=(A o1){
            m += o1.m;
        }
        void operator-=(A o1){
            m -= o1.m;
        }
        //una forma de que acepte nuestro objeto
        //en la consola
        operator const char*(){
            std::stringstream output;
            output << "Numero: "<< m << endl;
            return output.str().c_str();
        }
};

int main(){
    A o1{1};
    A o2{2};
    cout <<
    (o1 < o2)
    <<endl<<
    (o1 > o2)
    <<endl<<
    (o1+o2)
    <<
    (o1-o2)
    <<
    (o1 == o2)
    <<endl;
}