#include <iostream>
using std::cout;
using std::endl;
class A{
    private:
        int *ptr = new int[2];
    public:
        A()=default;
        int* getPtr(){
            return ptr;
        }
        ~A(){
            delete ptr;
        }
        void print(){
            cout << "Number: "<<*(ptr+1) << endl;
        }
};


int main(){
    A obj1;
    A obj2;
    *(obj1.getPtr()+1) = 12;//este puntero se queda huerfano
    obj1 = obj2;//despues de esto deja en orfandad al puntero "obj2.getPtr()"
}

    // A a;
    // int *myptr = a.getPtr();
    // *(myptr+1)=12;
    // print(a);
    // a.print();
    //quiere borrar algo ya borrado en el "print(a)"





// void print(A a){
//     //nothing!..
//     //muere el obj junto con su puntero
//     //debido a una copia superificial
// }


