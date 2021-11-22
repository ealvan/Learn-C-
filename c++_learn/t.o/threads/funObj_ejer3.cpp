/*
3. Write a binary predicate that helps sort in ascending order

*/
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
template<typename T>
class isPar{
    public:
        bool operator()(const T& t1, const T& t2){
            return (t1 > t2 );
        }
};

int main(){
    vector<int> lista = {1,32,42,32,5434,53,43,45,342,31,31};
    sort(lista.begin(), lista.end(), isPar<int>());
    for_each(lista.begin(), lista.end(),[](const int& item){ cout << item<<" "<<endl;});
}