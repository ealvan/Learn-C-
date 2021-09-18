#include <iostream>
#include <sstream>
#include <assert.h>
using namespace std;

class Bar {
public:
    // ...
    static Bar mem1; // ok: static member can have incomplete type --> Tag 1
    Bar *mem2;       // ok: pointer member can have incomplete type --> Tag 2
      // error: data members must have complete type --> Tag 3
    int x=4;    // --> Tag 4
    operator const char*(){
        stringstream out;
        
        // if(mem1){
        //     out << "Mem 1 is fill"<<endl;
        // }
        if(*mem2){
            out << "Mem 2 is fill"<<endl;            
        }
        string a = out.str();
        return a.c_str();
    }
};
int main(){
    Bar a;
    cout << a << endl;
    
}