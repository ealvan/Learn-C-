#include <iostream>
using std::cout;
using std::endl;
using std::string;

int main(){
    string strn="";
    long long n;
    std::cin >> n;
    while(true){
        cout << n << " ";
        if(n == 1) break;
        if(n%2 == 0){
            n=n/2;
        }else{
            n=3*n+1;
        }

    }
    cout << endl;
}