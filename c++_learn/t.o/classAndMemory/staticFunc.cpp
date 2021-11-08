#include <iostream>
using std::cout;
using std::endl;

class A{
    private:
        int a=12;
    public:
        int set(std::string str){
            cout << "STR"<<endl;
            return 0;
        }
        int set(double str){
            cout << "DOUBLE"<<endl;
            return 0.0;
        }
        
};
int main(){
    A a;
    //De acuerdo a los parametros llama a que funcion
    a.set("hola");
    a.set(12.31);
}