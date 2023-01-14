#include <bits/stdc++.h>
using namespace std;
const int n = 3;
vector<int> permutation;
bool chosen[n+1];

void print(vector<int>& perm){
    for(int item: perm){
        cout << item <<" ";
    }
    cout << "\n";
}

void search(){
    if(permutation.size() == n){
        print(permutation);
    }else{
        for(int i = 1; i <= n; i++){
            //using memory,but not cpu execution in
            //use to search my item into the vector
            if(chosen[i]) continue;
            chosen[i] = true;
            permutation.push_back(i);
            search();
            chosen[i] = false;
            permutation.pop_back();
        }
    }
}

int main(){
    search();
}