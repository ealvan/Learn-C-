#include <iostream>
#include <string.h>
using namespace std;
class MyString{
    private:
        char* buffer;
        MyString():buffer(NULL){
            cout << "Default constructor"<<endl;
        }
    public:
        MyString(const char* data){
            cout << "Origin constructor "<< endl;
            if(data != NULL){
                buffer = new char[strlen(data)+1];
                strcpy(buffer, data);
            }else{
                buffer = NULL;
            }
        }
        //Move constructor
        MyString(MyString&& sourceMove){
            cout << "Move constructor "<<endl;
            if(sourceMove.buffer != NULL){
                //delete[] buffer;
                buffer = sourceMove.buffer;
                sourceMove.buffer = NULL;
            }
        }
        //Copy Constructor
        MyString(const MyString& sourceCopy){
            cout << "Copy Constructor"<<endl;
            if(sourceCopy.buffer != NULL ){

                buffer = new char[strlen(sourceCopy.buffer)+1];
                strcpy(buffer, sourceCopy.buffer);
            }else{
                buffer = NULL;
            }
        }
        //Move assingment
        MyString& operator=(MyString&& moveSource){
            cout << "Move assignment"<<endl;
            if(moveSource.buffer != NULL && this != & moveSource){
                delete[] buffer;
                buffer = moveSource.buffer;
                moveSource.buffer = NULL;
            }
            return *this;
        }
        //Copy Assignment
        MyString& operator=(const MyString& copySource){
            cout << "Copy Assignment "<<endl;
            if(copySource.buffer != NULL && this != &copySource){
                if(buffer != NULL){
                    delete[] buffer;
                }
                buffer = new char[strlen(copySource.buffer)+1];
                strcpy(buffer, copySource.buffer);
            }
            return *this;
        }
        MyString operator+(const MyString& op){
            cout << "+ operator"<<endl;
            MyString str;
            if(op.buffer != NULL){
                str.buffer = new char[strlen(op.buffer)+strlen(buffer)];
                strcpy(str.buffer, buffer);
                strcat(str.buffer, op.buffer);
            }
            return str;
        }
        ~MyString(){
            if(buffer != NULL){
                delete[] buffer;
            }
        }
        operator const char* (){
            return buffer;
        }
        int getLen(){
            return strlen(buffer);
        }
};
int main(){
    MyString str1("I learn");
    MyString str2(" C++");
    MyString total("MyTotal is ");
    total = total + str1 + str2;
    //Origin constructor * 3
    //+ operator
    //Default constructor
    // Move assignment 
    cout << total<<endl;
}
