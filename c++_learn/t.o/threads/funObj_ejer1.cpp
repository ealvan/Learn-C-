/*
1. Write a unary function that
 can be used with std::for_each() to display the
double of the input parameter.
*/
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Functor{
public:
    virtual void operator()(const int& data){
        cout << (data*2) << endl;
    }
};
class ExtendFunctor: public Functor{
    public:
        int times{0};
        void operator()(const int& data) override{
            this->Functor::operator()(data);
            ++times;
        }
};

int main(){
    vector<int> lista = {1,3,5,7,9,11,13};
    ExtendFunctor f;
    f = for_each(lista.begin(), lista.end(), ExtendFunctor());
    cout << "Times called Functor() : "<< f.times << endl;
}