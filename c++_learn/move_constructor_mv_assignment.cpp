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
        //ORIGIN CONSTRUCTOR
        MyString(const char* data){
            cout << "Origin constructor"<<endl;
            if(data != NULL){
                buffer = new char[strlen(data)];
                strcpy(buffer, data);
            }else{
                buffer = NULL;
            }
        }
        //MOVE CONSTRUCTOR
        MyString( MyString&& moveStr){
            cout << "Move constructor"<<endl;
            if(moveStr.buffer != NULL){
                buffer = moveStr.buffer;
                moveStr.buffer = NULL;
            }
        }
        //MOVE ASSINGMENT
        MyString& operator=(MyString&& mvSrc){
            cout << "Move assignment operator"<<endl;
            if((&mvSrc != this) && (mvSrc.buffer != NULL)){
               delete[] buffer;//**
               buffer = mvSrc.buffer;
               mvSrc.buffer = NULL; 
            }
            return *this;
        }
        //COPY CONSTRUCTOR
        MyString(const MyString& sourceCopy){
            cout << "Copy constructor"<<endl;
            if(sourceCopy.buffer != NULL){
                buffer = new char[strlen(sourceCopy.buffer)];
                strcpy(buffer, sourceCopy.buffer);
            }else 
                buffer = NULL;
        }
        //COPY ASSIGNMENT
        MyString& operator=(const MyString& copySource){
            cout << "Copy assignment operator"<<endl;
            if((copySource.buffer != NULL) && (this != &copySource)){
                if(copySource.buffer != NULL){
                    delete[] buffer;
                }
                buffer = new char[strlen(copySource.buffer)];
                strcpy(buffer, copySource.buffer);
            }
            return *this;
        }
        ~MyString(){
            if(buffer != NULL){
                delete[] buffer;
            }
        }
        int getLen(){
            return strlen(buffer);
        }
        operator const char*(){
            return buffer;
        }
        MyString operator+(const MyString& addStr){
            cout << "Operator + called"<<endl;
            MyString temp;
            if(addStr.buffer != NULL){
                temp.buffer = new char[strlen(addStr.buffer)+getLen()];
                strcpy(temp.buffer, buffer);
                strcat(temp.buffer, addStr.buffer);
            }
            return temp;
        }

};
int main(){
    MyString s1("Hello ");
    MyString s2("World ");
    MyString s3("CPP");
    MyString total("Overwrite this");
    total = s1 + s2 + s3;
    cout << total<<endl;
}