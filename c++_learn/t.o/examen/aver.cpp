#include <iostream>
void foo(int && x){
    x-=1;
}
int main(){
    int &&y =10;
    foo(std::move(y));
    std::cout << y << std::endl;
}