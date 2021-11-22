#include <iostream>
using namespace std;

//Generic Class template
//only is considered when is used
//but is not use in main.
template<typename T1=int, typename T2=double>
class HoldsPair{
private:
    T1 a;
    T2 b;
public:
    HoldsPair(const T1& m, const T2& n)
    :a(m),b(n){}
    const T1& getFirst() const;
    const T2& getSecond() const;
};
//especialized code
//is considered by compiler because 
//there is a object instatiation in main function
template<> class HoldsPair<int,int>{
    private:
        int a;
        int b;
        string funMember;
    public:
        HoldsPair(int a,int b):a(a),b(b){}
        const int& getFirst() const{
            cout << "Retrieve First Value "<< a<<endl;
            return a;
        }
};
//Abstract:
/*
    how template code is considered or even
    ignored by the compiler depending on its usage.
*/
int main(){
    HoldsPair<int,int> obj1{100,200};
    int a = obj1.getFirst();
    cout << a << endl;
}