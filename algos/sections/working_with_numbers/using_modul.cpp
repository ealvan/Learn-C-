#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    long long x = 1;
    cout << "n!%m="<<n<<"!%"<<m<<endl;
    for(int i = 1; i <= n; i++){
        cout << "x="<<x<<"i="<<i<<" (x*i)%m="<<(x*i)%m<<endl;;
        x = (x*i)%m;
    }
    cout << x << "\n";
}