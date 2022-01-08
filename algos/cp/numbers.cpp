#include <iostream>
using std::cout;
using std::endl;
using std::string;
using std::cin;

/**/

/*Large Numbers*/
void manageLargeNumber(){
    int x = 123456789;
    //falta la conversion,sino seguira tratado como int
    long long b = x*x;
    long long c = (long long )x*x;
    cout << b << " "<< c << " "<<x << endl;
}


/*
Modular Arithmetic Properties
(a + b) mod m = (a mod m + b mod m) mod m
(a − b) mod m = (a mod m − b mod m) mod m
(a · b) mod m = (a mod m · b mod m) mod m
*/
//find n!%m = ?
void modular(){
    int n = 7;
    int m = 13;
    int x = 1;
    for(int i =1; i <= n; ++i){
        x = (x*i)%m;
    }
    cout << x << "\n";
    int y = -4%5;
    //cuando sale negativo
    //debes pasarlo a positivo sumandole el "modulo"
    if(y < 0) y +=5;
    cout << y << endl;

}
/*
Float Numbers
double: 64 bit accuracy
long double: 80 bit accuracy
decimal places: printf("%0.9f",numberF);
*/
void doubles(){
    double x = 0.3*3+0.1;
    printf("%0.20f\n",x);
    double e = 1e-9;
    if(std::abs(x-1) <= e){
        printf("1 == 0.9999...\n");
    }
}
#include <vector>
#include <utility>
using std::vector;
void shortCode(){
    long long a = 1234565LL;
    typedef long long ll;
    ll b = a;
    ll c = b*a;
    cout << c <<"\n";
    //more complex types
    typedef vector<int> vi;
    typedef std::pair<char,int> pci;
    //aonther way
    #define F first
    #define PB pushBack
    vi myv;
    myv.push_back(12);
    pci mypair;
    mypair = std::make_pair('c',12);

}
int main(){
    shortCode();
}

