#include <iostream>
using std::cout;
using std::endl;
using std::string;

//los valores r, son los que no apuntan a nigun lado
// int dame(){
//     return 10;
// }
// int main(){
//     //ERROR
//     dame() = 12;//10=12, como 10 no guarda ni apunta
//                 //entonces no se puede hacer esto
// }

//los valores l, son los qe tienen ubucacion en memoria
int hola;
int& dame(){
    hola = 100;
    return hola;
}
int main(){
    //OK 
    dame() = 12;//hola=12, como hola guarda un valor
                //entonces se puede hacer esto
}
