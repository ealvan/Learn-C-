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
        void setString(const char* buff){
            buffer = NULL;
            if(buff != NULL){
                buffer = new char[strlen(buff)+1];
                strcpy(buffer, buff);
            }
        }
};
struct Human{
    private:
        bool gender;
        int age;
        MyString name;
        
    public:
        Human(MyString& name,int age, bool gender){
            this->age = age;
            this->gender = gender;
            name.setString(name.getString());

        }
        int getAge (){
            return age;
        }
        const char* getName(){
            return name.getString();
        }
};
void talk( Human& data){
    cout << dec<<data.getAge() <<" years old"<<endl;
    cout << "I am "<< data.getName()<<endl;
}
int main(){
    MyString name("Dock");
    Human h(name,22,false);
    talk(h);
}
