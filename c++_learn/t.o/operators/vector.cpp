#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <sstream>

using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::ostringstream;

class Vector{
    private:
        string formated;
        int size{-1};
        vector<int> data;
    public:
        Vector(uint siz):data(siz , 0){}
        int operator[](const uint& index){
            return data[index];
        }
        int& operator[](const uint index){
            return data[index];
        }
        vector<int>& getData(){
            return data;
        }
        operator const char* (){
            ostringstream format;
            int i = 0;
            for(int& data: data){
                format << "index: "<<(i++)<<data << endl;
            }
            formated = format.str();
            return formated.c_str();
        }
};

int main(){
    Vector list{10};
    for(int i = 1 ; i < 9; i++){
        list.getData()[i] = i*2-1;
    }
    cout << list<<endl;

}