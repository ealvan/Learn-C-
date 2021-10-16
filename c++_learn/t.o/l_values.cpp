#include <iostream>
using std::cout;
using std::endl;

int main(){
    int a = 12;
    int* b = &a;
    cout << *b << endl;   
}