#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
template<typename T>
class Multiply{
    public:
        const T operator()(const T& d1, const T& d2){
            return d1*d2;
        }
};
template<typename T>
struct Print{
    string title;
    Print(const string& title):title(title){
        cout << title << endl;
    }
    void operator()(const T& data){
        cout << data << endl;
    }
};
int main(){
    vector<int> l1 = {1,2,3,4,5,6};
    vector<int> l2 = {101,102,103,104,105,106};
    vector<int> result;
    result.resize(l1.size());
    transform(l1.begin(),
        l1.end(),
        l2.begin(),
        result.begin(),
        Multiply<int>());
    for_each(l1.begin(),l1.end(),Print<int>("Lista Numero 1"));    
    for_each(l2.begin(),l2.end(), Print<int>("Lista Nro 2"));
    for_each(result.begin(),result.end(),Print<int>("Lista de Resultados"));  

}