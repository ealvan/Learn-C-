#include <iostream>
using std::cout;
using std::endl;
using std::string;
class Base{
    private:
        int a{-1};
        int b{-1};
    public:
        // DEFAULT, es el que nos da por default el compilador
        Base(){
            cout << "DEFAULT constructor"<<endl;
        } 

        //EXPLICIT contructor
        //es que podemos implementar;
        Base(int _a,int _b):a(_a),b(_b){
            cout << "EXPLICIT constructor"<<endl;
        }

        //COPY constructor
        //con este podemos copiar objetos, pero a veces cuando
        //son pesados los objetos, no es conveniente
        //el compilador te lo proporciona por defecto
        Base(const Base& src)
        :a(src.a),b(src.b){
            cout << "COPY constructor"<<endl;
        }
        //MOVE constructor
        //este es mejor en terminos de optimizacion
        // nos permite pasar por valor, y no una copia
        //lo que hace mas rapido nuestros programas
        Base(Base&& src)
        :a(src.a),b(src.b){
            cout << "MOVE constructor"<<endl;
        }
        //GET & SETS
        int getA()const{
            return a;
        }
        int getB()const{
            return b;
        }
        void setA(int& a){
            this->a = a;
        }
        void setB(int& b){
            this->b = b;
        }
        ~Base(){
            cout << "Destroyed"<<endl;
        }
};

class Derived:public Base{
    public:
        Derived(int a,int b):Base(a,b){

        }
        

};

int main(){
    //DEFAULT constructor   
    Base obj;
    //EXPLICIT constructor
    Base obj1(1,2);
    //COPY constructor
    Base cpy(100,200);
    Base obj2 = cpy;//llama al COPY contructor
    //MOVE constrcutor
    Base valor{-20,12};
    Base mv = std::move(valor);

    //Derived copy contructor
    Derived d1{1,2};
    Derived d2 = d1;//COPY
    Derived d3 = std::move(d2);//MOVE


}
