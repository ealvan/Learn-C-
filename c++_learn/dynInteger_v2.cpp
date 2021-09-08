#include <iostream>
using namespace std;
class DynIntegers{
    private:
        int* buffer;
        int len = 0;
        friend void sayHello(DynIntegers);
    public:
        DynIntegers(int* nums, int n){
            if(n > 0){
                len = n;
                for(int i = 0; i < len; i++){
                    *(buffer+i) = *(nums+i);
                }
            }else{
                buffer = NULL;
            }
        }
        DynIntegers(DynIntegers&& data){
            buffer = data.buffer;
            data.buffer = NULL;
        }
        DynIntegers& operator=(DynIntegers&& data){
            if(data.buffer != NULL && this != &data){
                delete[] buffer;
                buffer = data.buffer;
                data.buffer = NULL;
            }
            return *this;
        }
        ~DynIntegers(){
            delete[] buffer;
        }
        // implement default constructor, copy constructor, assignment operator
};
void sayHello(DynIntegers uno){

}
int main(){
    int *nums = new int[5];
    for(int i = 0; i < 5; i++){
        *(nums+i) = i*2+1;
    }
    int *objs = new int[4];
    DynIntegers obj1(nums, 5);
    // sayHello(obj1);
    
}