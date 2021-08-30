#include <iostream>
#include <string.h>
using namespace std;

class MyString{
    private:
        char* buffer;
    public:
        //My Constructor ORIGINAL
        MyString(const char* buff=""){
            buffer = NULL;
            if(buff != NULL){
                buffer = new char[strlen(buff)+1];
                strcpy(buffer, buff);
                cout << "(ConstructorOrigin)My buff point to : 0x"<< hex<<(unsigned int*)buffer;
                cout << endl;
            }
        }
        //COPY CONSTRUCTOR
        MyString(const MyString &copySource){
            buffer = NULL;
            if(copySource.buffer != NULL){
                buffer = new char[strlen(copySource.buffer)+1];
                strcpy(buffer, copySource.buffer);
                cout << "(CopyConstructor)My buff point to : 0x"<<
                 hex<<(unsigned int*)copySource.buffer;
                cout << endl;
            }
        }
        //MOVE CONSTRUCTOR
        MyString(MyString&& moveSource){
            if(moveSource.buffer != NULL){
                buffer = moveSource.buffer;
                moveSource.buffer = NULL;
                cout << "Call Move Constructor!"<<endl;
            }

        }
        ~MyString(){
            cout << "Call Destructor"<<endl;
            if(buffer != NULL){
                delete [] buffer;
            }
        }
        int getLength(){
            return strlen(buffer)+1;
        }
        const char* getString(){
            return buffer;
        }
};

MyString copy(MyString& str){
    MyString temp(str.getString());
    return temp;
}
void useMyString(MyString str){
    cout << "Your string have "<<str.getLength()<<" Caracters."<<endl;
    cout << "His Content is: " <<str.getString()<<endl;
    return;
}

int main(){
    MyString str("Hi my name is Ed");
    MyString data (copy(str));
    useMyString(data);
    // useMyString(str);
    //const MyString& a = MyString("");
}