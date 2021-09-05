#include <iostream>
#include <string.h>
using namespace std;

class MyString{
    private:
        char* buffer;
    public:
        MyString(const char* buff){
            if(buff != NULL){
                buffer = new char[strlen(buff)+1];
                strcpy(buffer, buff);
            }else
                buffer = NULL;
        }
        MyString& operator=(const MyString& copySource){
            if( (this != & copySource) && (copySource.buffer != NULL)){
                if(buffer != NULL){
                    delete[] buffer;
                }
                buffer = new char[strlen(copySource.buffer) + 1];
                strcpy(buffer, copySource.buffer);
            }
            return *this;//el value, no the same object
        }
        operator const char*(){
            return buffer;
        }
        ~MyString(){
            delete[] buffer;
        }
};

int main(){
    MyString str1("Hello ");
    MyString str2("World");
    cout << str1 << str2 << endl;
    str1 = str2;
    cout << str1 << str2 << endl;
}