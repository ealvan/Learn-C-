#include "planPiece.h"
#include <sstream>

enum Tipo{
    Economicas,
    AltoDesenpenio,
    paraNieve,
    paraCompeticion
};

class Llanta: public Piece{
protected:
    std::string format;
    int presionMax;
    int limiteCarga;
    Tipo tipo;
public:
    Llanta()=default;
    Llanta(int pM, int limCarga, Tipo tip,Color c,Marca m, double cos)
    :Piece(c,m,cos),presionMax(pM),limiteCarga(limCarga),tipo(tip){}
    operator const char* (){
        std::stringstream output;
        output << "PresionMax: "<<presionMax<<"\nLimiteCarga: "<<limiteCarga;   
        format = output.str();
        return format.c_str();    
    }
};


