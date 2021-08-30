#include <string>
#include <iostream>
#include <cmath>
using std::cout;
using std::endl;
using std::string;
//debe ser long, porque hay numeros que
//salen del rango, cuando se multiplica por *3+1
void weird_algo(long n){
    if(n > 0 && n <= 1E6){
        while(n != 1){
            cout   << n << " ";
            if(remainder(n,2.0) == 0){
                n = n/2;
            }else{
                n = 3*n + 1;
            }
        }
        cout << n;    
    } 
}

int main(){
    long n;
    std::cin >> n; 
    weird_algo(n);
}