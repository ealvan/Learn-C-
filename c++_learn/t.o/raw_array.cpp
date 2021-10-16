#include <cinttypes>
#include <iostream>
using std::cout;
using std::endl;
using std::string;

int main(){
    int * ptr = new int[5];
    for(int i = 0; i < 5; i++){
        *(ptr+i)=2*i+1;
        cout << *(ptr+i) << endl;
    }
    delete[] ptr;

}