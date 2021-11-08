#include <iostream>
using std::cout;
using std::endl;
using std::string;

class Asiento{
    private:
        enum Type{
            VIP,STD
        };
        enum Color{
            Yellow,Blue,Orange,Red,Green,Black
        };
        Color color{Black};
        Type type{VIP};
    public:
        Asiento();
        Asiento(Color col,Type ty);
        void print();
};
