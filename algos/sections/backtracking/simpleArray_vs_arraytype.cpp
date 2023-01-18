#include <bits/stdc++.h>
using namespace std;

void foo1(array<int,4> hola){//by deafault it's creating a new copy of the element
    hola[0]=1;
}
void foo2(int arr[4]){ //keeps the changes out of this scope
    arr[0]=1;//maintains this change
}
template<typename iterator>
void print(iterator& list){
    for(auto item : list){
        cout << item << " ";
    }
    cout << "\n";
}

int main(){
    int arr[4] = {0,0,0,0};
    array<int,4> arr2 = {0,0,0,0};
    foo1(arr2);
    foo2(arr);

    print(arr);
    print(arr2);
}