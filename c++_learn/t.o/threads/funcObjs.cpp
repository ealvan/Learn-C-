//#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

template<typename T>
class Print{
    public:
    int count=0;;
    Print() = default;
    void operator()(const T& item ){
        ++count;
        cout << item << endl;
    }
};

template<typename T>
Print<T> forEach(vector<T> lista, Print<T>&& function){
    for(const T& item: lista){
        function(item);
    }
    return function;
}

int main(){
    Print<int> hey;
    vector<int> list = {1,3,4,52,5,2};
    hey = forEach(list,Print<int>());
    cout << "Times call: "<< hey.count << endl;
}