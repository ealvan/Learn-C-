#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
template<typename T>
struct isMultiple{
    T divisor;
    isMultiple(const T& div):divisor(div){}
    bool operator() (const T& number){
        return ((number%divisor) == 0);
    }
};
int main(){
    int divisor = 4;
    isMultiple<int> multi(divisor);
    vector<int> lista = { 25, 26, 27, 28, 29, 30, 31 };
    auto item = find_if(lista.begin()
        ,lista.end(),
        isMultiple<int>(divisor)
    );
    if(item != lista.end()){
        cout << "First element in vector divisible by " << divisor;
        cout << ": " << *item << endl;
    }
}
