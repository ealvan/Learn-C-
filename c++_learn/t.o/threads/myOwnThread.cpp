#include <future>
#include <thread>
#include <iostream>
#include <chrono>
using namespace std::chrono;

using std::cout;
using std::endl;

void f(std::promise<int> && prom,int s,int e){
    std::this_thread::sleep_for(1s);
    prom.set_value(s+e);
}

int main(){
    // int a = 13;
    // f(std::move(a));
    // cout << a << endl;
    int start{},end=13;
    std::promise<int> prom;
    std::future<int> fut = prom.get_future();

    std::thread t1(f,std::move(prom),start,end);;

    cout << "Waiting for promise"<<endl;
    cout << "Total Sum: "<< fut.get() << endl;

    t1.join();
}