#include <iostream>

using namespace std;
class DynIntegers{
    private:
        int* buffer = NULL;
        int len = 0;
        friend void sayHello(DynIntegers uno);
        DynIntegers():buffer(NULL){
            cout << "Default Integers"<<endl;
        }
    public:
        DynIntegers( const int* buff, int n){
            if(buff != NULL){
                buffer = new int[n];
                for(int i = 0; i < n ; i++){
                    *(buffer+i) = *(buff+i);
                }
                len = n;
            }else{
                buffer = NULL;
                len = 0;
            }
        }
        //Move constructor
        DynIntegers(DynIntegers&& move){
            cout << "Move constructor !"<<endl;
            if(move.buffer != NULL){
                buffer = move.buffer;
                move.buffer = NULL;
            }
        }
        //Copy constructor
        DynIntegers(const DynIntegers& data){
            cout << "Copy constructor !"<<endl;
            if(data.buffer != NULL){
                len = data.len;
                buffer = new int[len];
                for(int i = 0; i < data.len; i++){
                    *(buffer+i) = *(data.buffer+i);
                }
            }
        }
        //Move assignment
        //it's very important the "&" in of value of return, because
        //pass by reference and not by value.
        //if there is no "&" in return value signature, then
        //you will create another object.
        DynIntegers& operator=(DynIntegers&& move){
            cout << "Move assignment !"<<endl;
            if(move.buffer != NULL && this != &move){
                delete[] buffer;
                buffer = move.buffer;
                move.buffer = NULL;
            }
            return *this;
        }
        //Copy assignment
        DynIntegers& operator=(const DynIntegers& data){
            cout << "Copy assignment !"<<endl;
            if(data.buffer != NULL && this != &data){
                if(buffer != NULL){
                    delete[] buffer;
                }
                len = data.len;
                buffer = new int[data.len];
                for(int i = 0; i < data.len;i++){
                    *(buffer+i) = *(data.buffer + i);
                }
            }
            return *this;
        }
};
void sayHello(DynIntegers uno){
    for(int i = 0; i < uno.len ; i++){
        cout << *(uno.buffer+i)<<endl;
    }
}
int main(){
    const int SIZE = 3;
    int *nums=new int[SIZE];
    *(nums+0) = 11;
    *(nums+1) = 12;
    *(nums+2) = 13;
    int *a = new int[SIZE];
    
    DynIntegers uno(nums, SIZE);
    DynIntegers dos(a,SIZE);
    sayHello(uno);
    dos = uno;
    sayHello(dos);
}