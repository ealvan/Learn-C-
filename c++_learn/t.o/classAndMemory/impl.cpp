#include <iostream>
using std::cout;
using std::endl;

class B{
//implementacion simple
private:
    int size;
    int* buff;
public:

    B(int size):size(size){
        //alocamos memoria
        buff = new int[size];
        for(int i =0; i < size; ++i){
            *(buff+i) = 0;//default value
        }
    }
    B(const B& src){
        size = src.size;
        if(buff == nullptr){
            delete[] buff;
        }     
        size = src.size;
        buff = new int[size];
        for(int i =0; i < size; ++i){
            *(buff+i) = *(src.buff+i);
        } 
    }
    B& operator=(const B& src){
        cout << "Copy constructor"<<endl;
        //check self-assignment first
        if(this == &src){
            //si es el mismo obj
            //ya no hacemos lo demas
            return *this;
        }
        //ahora borramos,para que no queden huerfanos
        if(buff == nullptr){
            delete[] buff;
        }
        //y copiamos
        size = src.size;
        buff = new int[size];
        for(int i =0; i < size; ++i){
            *(buff+i) = *(src.buff+i);
        }  
        return *this;//retornamos direccion  
    }
    
};

int main(){
    B o1{2};
    B o2{4};
    o1 = o2;
}