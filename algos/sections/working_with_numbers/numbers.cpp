#include <bits/stdc++.h>
using namespace std;
int main(){
    //INTEGERS -2**31 -> 2**31-1
    int a=111111;
    long long b = a*a;
    cout << a <<" Result="<<b<<endl; //bad output innacurate
    //LONG LONG -2**63 -> 2*63-1
    long long c = (long long)a*a;
    cout << a <<" Result="<<c<<endl; // good output accurate
    //------------------------------------------------------
    //FLOAT NUMBERS
    double x = 0.3*3 +0.1,y=3.14156, e=1e+9;
    x = 3.1416*12 / 13;
    cout << x <<endl;
    printf("%.12f\n",x);
    //Dont compare floats with "==", it's risky
    bool isequal = x - y < e;
    cout << isequal<<endl;
}