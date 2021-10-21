#include <iostream>
#include <chrono>
#include <iomanip>
#include <thread>
#include <pthread.h>
using std::cout;
using std::endl;
using std::string;
using namespace std::chrono;
using std::thread;
//comands:
//g++ -o run 1_file.cpp -lpthread
inline void printTime(){
    auto now = std::chrono::system_clock::now();
    auto stime = std::chrono::system_clock::to_time_t(now);
    auto ltime = std::localtime(&stime);
    std::cout << std::put_time(ltime,"%c")<< std::endl;
}

void f1(string& data){
    data = "Function F1 works!!";
}
void f2(string& data){
    data = "Function F2 works!!";
}

void func4(){
    printTime();
    std::this_thread::sleep_for(2s);
    printTime();
}
void func5(){
    printTime();
    std::this_thread::sleep_until(
        std::chrono::system_clock::now()+2s
    );
    printTime();
}
void func6(std::chrono::seconds timeout){
    auto now = std::chrono::system_clock::now();
    printTime();
    auto then = now+timeout;
    do{

    }while(std::chrono::system_clock::now() < then);
    printTime();
}
void func1(){
    cout << "Thread functions without params\n";
}
void func2(int const i, double const d, string const s){
    cout << i <<","<<d<<","<<s<<endl;
}

int main(){
    // thread t(func1);
    // t.join();
    // thread t2(func2, 100,3.1415,"42");
    // t2.join();
//---------------------
    // string data="Hola es el inicio";
    // cout << data << endl;
    // thread t1(f1,std::ref(data));
    // t1.join();
    // cout << data << endl;
    // thread t2(f2,std::ref(data));
    // t2.join();
    // cout << data << endl;
//---------------------
    // thread t(func4);
    // t.join();
//---------------------
    // thread t(func5);
    // t.join();
//----------------------
    thread t(func6, std::chrono::seconds(2));
    t.join();
}
