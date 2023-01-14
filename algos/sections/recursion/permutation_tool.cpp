#include <bits/stdc++.h>
using namespace std;

template<typename Iterable>
void print(Iterable& permutation){
    for(auto item: permutation)
    {
        cout << item << " ";
    }
    cout << endl;
}
template<typename Iter>
bool has_permutation(Iter first, Iter end){
    return next_permutation(first,end); 
}

template<typename Iterable>
void stl_permutation(Iterable myList){
    do{
        print(myList);
    }while(has_permutation(myList.begin(), myList.end()));
}

int main(){
    vector<int> mynumbers = {1,2,3,4,5};
    string mystring = "abcde";
    stl_permutation(mynumbers);
}