#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

template<typename elementType>
struct display{
    int count;
    display():count(0){}//constructor
    void operator()(const elementType& data){
        count++;
        cout << data<<" ";
    }
};


int main(){
    vector<int> list{ 22, 2017, -1, 999, 43, 901 };
    display<int> disp;
    for(auto &item: list){
        disp(item);
    }
    disp = for_each(list.begin(),list.end(),display<int>());
    cout << endl << "#Functor invoked : "<< disp.count << endl;
}