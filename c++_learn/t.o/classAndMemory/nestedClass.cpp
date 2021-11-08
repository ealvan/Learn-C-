#include <iostream>
using std::cout;
using std::endl;
using std::string;
class Bus{
    private:
        int sizeSits;
    public:
        class Asiento{
            private:
                string color{"Black"};
                char tipo{'A'};
            public:
                Asiento();
                Asiento(string col,char ty);
                void print();
        };
        Bus(int sizeSits);
};
//IMPLEMENTACION
Bus::Asiento::Asiento(){ /*default constructor*/ }
Bus::Asiento::Asiento(string c,char t):color(c),tipo(t){ 
    //implementacion 
}
//mejor forma de usar
using scope = Bus::Asiento;
void scope::print(){
    cout << "Color: "<< color<<" Tipo: "<< tipo << endl;
}
