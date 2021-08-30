#include <iostream>
#include <string.h>
using namespace std;
class MyString{
    private:
        char* buffer;
    public:
        MyString(MyString& moveSource){
            if(moveSource.buffer != NULL){
                buffer = moveSource.buffer;//copiando contenido
                moveSource.buffer = NULL;//borrando el content
            }
        }
        MyString(const char* buff){
            cout << "Called Constructor"<<endl;
            buffer = new char[strlen(buff)+1];
            strcpy(buffer,buff);
        }
        //copy, but can huge impact in C++ when Characters'size are enormous
        // MyString copy(MyString content){
        //     MyString temp(content.getString());
        //     return temp;
        // }
        //for this bottleneck, there are "Moving Constructor"
        //Mueve los datos de su object to another object!
        

        int getLen(){
            return strlen(buffer);
        }
        const char* getString(){
            return buffer;
        }
        void setString(const char* newContent){
            int len = strlen(newContent);
            buffer = new char[len];
            strcpy(buffer, newContent);
        }
        ~MyString(){
            cout << "Called destructor!"<<endl;
            if(buffer != NULL){
                delete [] buffer;
            }
        }
};
MyString copy(MyString content){
    MyString temp(content.getString());
    return temp;
}
int main(){
    MyString sayHello("Say Hello from my class!");
    MyString sayHelloAgain(sayHello.getString());
    sayHello.setString("I can change my value!");
    cout << "MyString are "<<sayHelloAgain.getLen()<<" characters long"<<endl;
    cout << "MyString content is : " << sayHello.getString() <<endl;
}