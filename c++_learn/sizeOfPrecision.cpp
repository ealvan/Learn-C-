#include <iostream>
#include <string.h>
using namespace std;

class MyString{
    private:
        char* buffer;
    public:
        MyString(const char* str){
            buffer = NULL;
            if(str != NULL){
                buffer = new char[strlen(str)+1];
                strcpy(buffer, str);
            }
        }
        MyString(const MyString& copySource){
            buffer = NULL;
            if(copySource.buffer != NULL){
                buffer = new char[strlen(copySource.buffer)+1];
                strcpy(buffer, copySource.buffer);
            }
        }
        ~MyString(){
            if(buffer != NULL){
                delete[] buffer;
            }
        }
        const char* getString(){
            return buffer;
        }
        int getLength(){
            return strlen(buffer);
        }
};
class Human{
    private:
        MyString name;//8 bytes
        bool gender;//1 byte
        int age; //4 byte
        //word padding influences the result of sizeof()
        //Total sizeof = 16 bytes 
    public:
        Human(const MyString& name, bool gender, int age)
        :name(name), gender(gender),age(age){
        }
        int getAge(){
            return age;
        }
};
int main(){
    MyString n1("Edden");
    MyString n2("Gemo");
    cout << "MyString sizeof():"<<endl;
    cout << sizeof(MyString)<<endl;
    cout << sizeof(n1)<<endl;
    cout << sizeof(n2)<<endl;
    Human h1(n1,true, 18);
    Human h2(n2,false, 21);
    cout << "Human sizeof():"<<endl;
    cout << sizeof(Human)<<endl;
    cout << sizeof(h1)<<endl;
    cout << sizeof(h2)<<endl;
    cout << sizeof(true) << endl;    
}