#include <iostream>
#include <vector>
#include <cmath>

using std::vector;
using std::cout;
using std::endl;
using std::string;

void setsOps(){
    //hay un numero de 32 bits,
    //debemos colocat bits 1, en las posiciones que queremos
    int x = 0;//32 bits llenos de ceros
    x = x |(1<<1);
    x |= (1<< 3);
    x |= (1<< 4);
    x |= (1<< 8);
    cout << __builtin_popcount(x)<<endl;//cuantos unos metimos
    //print the bits
    for(int k = 31; k >= 0; --k){
        if(x&(1<<k)) cout << k<<" ";
    }
    cout << endl;
}

void unionSets(){
    const int n = 3;
    int set1[n] = {1,2,8};
    int set2[n] = {2,1,9};
    //union: 1,2,8,9
    int s1,s2;

    s1 = (1<<set1[0]);
    s2 = (1<<set2[0]);

    for(int i = 1; i < n; ++i){
        s1 |= (1<<set1[i]);
        s2 |= (1<<set2[i]);
    }
    int z = s1|s2;
    for(int i = 0; i <= 31; ++i){
        if(z&(1<<i)) cout << i<<" ";
    }
    cout << endl;
}

void printBits(int n){
    for(int i = 31; i >= 0; --i){
        if(i%5 == 0) cout << " ";
        if(n&(1<<i)) cout << "1 ";
        else    cout << "0 ";
    }
    cout<<" - "<<n<< endl;
}


void for_withBits(){
    int n = 4;
    //2^n-1, [0,7]
    for(int b = 0; b < (1<<n); ++b){
        //de {0,...., n-1}
        cout << b << endl;
    }
    // subsets  with only K bits
    int k = 3;
    for(int b = 0; b <(1<<n); ++b){
        if(__builtin_popcount(b) == k){
            printBits(b);
        }
    }
}
void subsets(){
    int x = 3;
    int b = 0;
    do{
        printBits(b);
    }while(b=(b-x)&x);
}
#include <bitset>
using std::bitset;
void bitsets(){
    bitset<10> bits;
    bitset<10> bits2;
    for(int i = 0; i < 10;++i){
        bits[i] = i%2 == 0;//1
        bits2[i] = i%2 != 0;//0
    }
    cout << "NUmbers o 1's in bitset: "<< bits.count() << endl;
    bitset<10> res = bits&bits2;
    bitset<10> res1 = bits|bits2;
    bitset<10> res2 = bits^bits2;
    
    
    for(int i = 0; i < 10;++i){
        cout << res[i] << " ";
    }
    cout << endl;
}

int main(){
    bitsets();
    // subsets();
    // for_withBits();
    // unionSets();
    // setsOps();
}