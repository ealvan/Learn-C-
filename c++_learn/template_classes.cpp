#include <iostream>
using namespace std;

template<typename T1=int, typename T2=double>
class HoldsPair{
private:
    T1 first;
    T2 second;
public:
    HoldsPair(const T1& first, const T2& second)
    :first(first),second(second){}
    const T1& getFirst() const{
        return first;
    }
    const T2& getSecond() const{
        return second;
    }
};

int main(){
    HoldsPair<> o1{100,3.1415};
    HoldsPair<short,const char*> o2{56,"C++ Templates!"};

    cout << "The first object contains: "<<endl;
    cout << "   1. "<< o1.getFirst() << endl;
    cout << "   2. "<< o1.getSecond() << endl;
    cout << "The second Object contains"<<endl;
    cout << "   1. "<< o2.getFirst() << endl;
    cout << "   2. "<< o2.getSecond() << endl;
}