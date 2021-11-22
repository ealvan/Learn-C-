#include <iostream>
#include <string>

using namespace std;

template<typename T>
const T& MAX(const T& a, const T& b){
    return a > b ? a : b;
}
template<typename T>
void display(const T&a, const T& b){
    cout << "Max between in "<< a << " - "<< b << endl;
    cout << MAX(a,b) << endl;
}

int main(){
    int a=12, b = 13;
    double c=14.12, d=45.121;
    string e("jose"),f("pepe");
    //Autmatic type detection
    cout << MAX(a,b)<<endl; MAX<int>(a,b);
    cout << MAX(c,d)<<endl; MAX<double>(c,d);
    cout << MAX(e,f)<<endl; 
}