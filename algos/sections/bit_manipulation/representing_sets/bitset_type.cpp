#include <bits/stdc++.h>
using namespace std;

void printSet(bitset<10> set){
    for(int i =0; i < 10; i++){
        cout << set[i] << " ";
    }
    cout <<" #1's= "<<set.count()<< endl;
}

int main(){
    bitset<10> s;
    s |= 1<< 1;
    s |= 1<< 2;
    s |= 1<< 3;
    s |= 1<< 4;
    
    bitset<10> n;
    n |= 1 << 1;
    n |= 1 << 3;
    n |= 1 << 4;
    n |= 1 << 5;
    
    printSet(s);
    printSet(n);
    
    bitset<10> b = s & n;
    printSet(b);
    b = s | n;
    printSet(b);
}