#include <bits/stdc++.h>
using namespace std;
int solve(int x, array<int,3>& coins){
    if(x < 0) return INT_MAX-1;
    if(x == 0) return 0;
    int best = INT_MAX-1;
    for(int c : coins){
        best = min(best, solve(x-c,coins)+1);
    }
    // cout << "Best: "<<best<< " x: "<<x<<endl;
    return best;
}

int ready[100]={0};
int value[100]={0};
int solve2(int x, array<int,3>&coins){
    if(x < 0) return INT_MAX-1;
    if(x == 0) return 0;
    if(ready[x]) return value[x];

    int best = INT_MAX-1;
    for(int c : coins){
        int ncoins = solve2(x-c,coins);
        best = min(best, ncoins+1);
        // if(best > ncoins +1){
        //     best = ncoins+1;
        //     cout << "*"<<c<<" ";
        // }
    }
    ready[x] = true;
    value[x] = best;
    return best;
}
//------------------------------------------------------------
int iterativeCoinProblem(int n, array<int,3>&coins){
    vector<int> values(n,INT_MAX);
    vector<int> first(n,0);
    value[0] = 0;
    int min_coins = 0;
    for(int x=1; x <= n; x++){
        value[x] = INT_MAX;
        for(auto& c: coins){
            if(x-c >= 0 && value[x-c]+1 < value[x]){
                value[x] = value[x-c]+1;
                // min_coins = value[x];
                first[x] = c;
                cout << "x: "<<x << " first[x]= "<<first[x]<<endl;
            }
        }
    }
    min_coins = value[n];
    cout << "Coins to get "<<n<<" $ are: ";    
    while(n>0){
        cout << first[n] <<" ";
        n -= first[n];
    }
    cout << endl;
    return min_coins;
}
//------------------------------------------------------------
void findMinimumCoins(uint8_t options){
    int x = 10;
    if(options & (1<<1)){
        array<int,3> coins = {1,3,4};
        int min_coins = solve(x,coins);
        cout << "(Method1)Min coins to get "<< x << " is: "<<min_coins << " coins\n";
    }
    if(options & (1<<2)){
        array<int,3> coins = {1,3,4};
        int min_coins = solve2(x,coins);
        cout << "(Method2)Min coins to get "<< x << " is: "<<min_coins << " coins\n";
    }
    if(options & (1<<3)){
        array<int,3> coins = {1,3,4};
        
        int min_coins = iterativeCoinProblem(x,coins);
        cout << "(Method3)Min coins to get "<< x << " is: "<<min_coins << " coins\n";        
    }
    if(options & (1<<4)){
        
    }
}

int main(){
    uint8_t options;
    uint8_t method1 = 1 << 1;
    uint8_t method2 = 1 << 2;
    uint8_t method3 = 1 << 3;
    uint8_t method4 = 1 << 4;
    array<uint8_t,4> flags = {method1,method2,method3,method4};
    options |= (method1 | method2 | method3);
    findMinimumCoins(options);
}