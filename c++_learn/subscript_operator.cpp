#include <iostream>
#include <string.h>
using namespace std;
class MyString{
    private:
        char* buffer;
    public:
        MyString(const char* buff){
            if(buff != NULL){
                buffer = new char[strlen(buff)];
                strcpy(buffer, buff);
            }else 
            buffer = NULL;
        }
        MyString(const MyString& str){
            if(str.buffer != NULL){
                buffer = new char[strlen(str.buffer)];
                strcpy(buffer, str.buffer);
            }else
                buffer = NULL;
        }
        MyString& operator=(const MyString& data){
            if(&data != this && data.buffer != NULL){
                if(buffer != NULL){
                    delete[] buffer;
                }
                buffer = new char[strlen(data.buffer)];
                strcpy(buffer, data.buffer);
            }
            return *this;
        }
        operator const char*()const {
            return buffer;
        }
        //read operator!
        const char operator[] (int index) const{
            if(index < getLen()){
                return buffer[index];
            }
            return '?';
        }
        //write operator!
        char& operator[](int index){
            return buffer[index];
        }

        int getLen() const {
            return strlen(buffer);
        }
        ~MyString(){
            if(buffer != NULL){
                delete[] buffer;
            }
        }

};

int main(){
    string data = "I am a crazy guy!!";
    MyString str (data.c_str());
    cout << "Len : "<< str.getLen() << endl;
    //loop my string
    for(int i = 0; i < str.getLen() ; i++){
        cout << "Item "<< (i+1) << ": "<< str[i]<<endl;
    }
    str[1]= ';';
    cout << str[1] << endl;
    
}


