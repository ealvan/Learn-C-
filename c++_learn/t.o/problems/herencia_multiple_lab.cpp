#include "polimorfismo_lab.cpp"
using namespace std;

class Todologo: public Doctor, public Bombero, public Arquitecto{
    public:
        Todologo(string n, int a)
        :Doctor(n,a,4300.0),
        Bombero(n,a,1234.0),
        Arquitecto(n,a,3400.0){
        }
        void presentarme() const{
            cout << "Soy todologo"<<endl;
        }
};  

int main(){
    Todologo uno("todologo",56);
    display(uno);

}