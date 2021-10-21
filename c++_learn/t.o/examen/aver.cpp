#include <iostream>
using namespace std;
void foo(int && x){
    x-=1;
}
int main(){
    int && y = 10;
    cout << &y << endl;
    cout << y << endl;

}