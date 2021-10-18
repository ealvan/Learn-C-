#include <iostream>
#include <string.h>

class String{
    private:
        int size;
        char* buffer{nullptr};
    public:
        String() = default;
        //CTOR
        String(const char* buff){
            printf("Created!\n");
            size = strlen(buff);
            buffer = new char[size];
            memcpy(buffer, buff, size);
        }
        //COPY
        String(const String& src){
            printf("Copied!\n");
            size = strlen(src.buffer);
            buffer = new char[size];
            memcpy(buffer, src.buffer, size);
        }
        //MOVE
        String(String&& src){
            printf("Moved!\n");
            size = src.size;
            buffer = src.buffer;
            src.buffer = nullptr;
        }
        String& operator=(String&& src){
            printf("Assign Optor. Moved!\n");
            if(this != &src){
                delete[] buffer;
                size = src.size;
                buffer = src.buffer;
                src.buffer = nullptr;
            }
            return *this;
        }        
        ~String(){
            printf("Destroyed!\n");
            delete[] buffer;
            
        }
        void print() const{
            if(buffer == nullptr){
                printf("\n");
                return;
            }

            for(int i = 0; i < size; i++)
                printf("%c",buffer[i]);
            printf("\n");
        }
    
};
class Entity{
    private:
        String mem1;
    public:
        Entity(const String& data):mem1(data){        }
        Entity(String&& data):mem1((String&&)data){    }
        void printMem() const{
            mem1.print();
        }
};
int main(){
    // Entity hola(String("Cherno"));   
    // hola.printMem();
    String a("Hello");
    String b;
    std::cout << "A:";
    a.print();
    std::cout << "B:";
    b.print();
    b = std::move(a);
    std::cout << "A:";
    a.print();
    std::cout << "B:";
    b.print();
    
}