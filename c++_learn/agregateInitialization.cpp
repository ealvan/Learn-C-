#include <iostream>
#include <string>

using namespace std;
struct Human
{
    int age;
    string name;
    string jobs[2];
};

int main(){
    //agregate initialization
    int nums[] = {12,12,32,32,4232,32,1};
    char hello[8] = {'a','s','d','e','.','t','x','t'};
    struct Human hs[]= {
        {12,"Ada", {"Cal","Dara"}},
        {22, "Ada", {"Gola","Monial"}}
    };
    cout << hs[0].jobs[1] << endl;    
}