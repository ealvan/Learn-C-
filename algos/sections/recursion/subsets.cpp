#include <bits/stdc++.h>
using namespace std;
int n = 3;
vector<int> subset;
void search(int k){

    if(k == n+1){
        for(int item : subset){
            cout << item << " ";
        }
        cout << endl;
    }else{
        subset.push_back(k);
        search(k+1);
        subset.pop_back();
        search(k+1);
    }
}

int main(){
    // freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    search(1);
}