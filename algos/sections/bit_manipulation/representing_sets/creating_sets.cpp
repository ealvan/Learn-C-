#include <bits/stdc++.h>
using namespace std;

int createSet(){
    // set with the numbers 1 3 4 8
    int x = 0;
    x |= (1 << 1);
    x |= (1 << 3);
    x |= (1 << 4);
    x |= (1 << 8);
    return x;
}

int getSetSize(int x){
    return __builtin_popcount(x);
}

void printSet(int x){
    for(int i = 0; i <= 31; i++){
        if(x&(1<<i)) {
            // cout << i << " ";
            printf("%02hhi ",x&(1<<i));
        }
    }
}

int main(){
    int x = createSet();
    int size = getSetSize(x);
    printSet(x);
    cout << "\n Number of Items: "<< size << "\n";
}