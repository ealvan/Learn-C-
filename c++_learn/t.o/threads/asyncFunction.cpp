#include <future>
#include <thread>
#include <iostream>
#include <algorithm>
using namespace std::chrono;
//using namespace std;
using std::cout;
using std::endl;

int function(int a , int b){
    cout << "Other Id thread: "<< std::this_thread::get_id() << endl;
    std::this_thread::sleep_for(1s);
    return a+b;
}

int main(){
    cout << "Main Id thread: "<< std::this_thread::get_id() << endl;
    int a{},b=13;
    std::future<int> objF = std::async(std::launch::async,function,a,b);
    cout << "Waiting"<<endl;
    cout << "Suma: "<< objF.get() << endl;
}