#include <iostream>
using namespace std;

constexpr int fib(int n){
    return (n <= 1)? n: fib(n-1)+fib(n-2);
}

int main(){
    const long int res = fib(1);
    cout << res << endl;
}
