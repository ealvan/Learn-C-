#include "planPiece.h"
#include <sstream>
#include <map>

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
    void print() override{};
};

// ----------------------------------------------------------
class Ventana:public Piece{
protected:
    double ancho;
    double alto;
public:
    Ventana() = default;
    Ventana(Color c,Marca m, double cos,double anc,double alt)
    :Piece(c,m,cos),ancho(anc),alto(alt)
    {
    }
    void print() override{};
};
//---------------------------------------------------------------------
class Motor: public Piece{
protected:
    int caballos;
public:
    Motor() = default;
    Motor(Color c,Marca m, double cos,int cab)
    :Piece(c,m,cos),caballos(cab){}
    void print() override{};
};

//---------------------------------------------------------------------
std::map<const int,const char *> mapa = {
    {Marca::MERAKI,"Es muy buen asiento, para relajarse"},
    {Marca::TOYOTA,"No es buen asiento para viajes largos"},
    {Marca::TESLA,"Es muy deportivo"},
};

class Asiento: public Piece{
protected:
    std::string descripcion;
public:
    Asiento() = default;
    Asiento(Color c,Marca m, double cos,int cab,const char* desc)
    :Piece(c,m,cos),descripcion(mapa[m]){}
    void print() override{};
};
//---------------------------------------------------------------------
class Timon: public Piece{
protected:
    int radio;
public:
    Timon() = default;
    Timon(Color c,Marca m, double cos,int radio)
    :Piece(c,m,cos),radio(radio){}
    void print() override{};
};
//---------------------------------------------------------------------
class Bateria: public Piece{
protected:
    int lifetime;
public:
    Bateria() = default;
    Bateria(Color c,Marca m, double cos,int lifetime)
    :Piece(c,m,cos),lifetime(lifetime){}
    void print() override{};
};
//---------------------------------------------------------------------
class Alternador: public Piece{
protected:
    int longPolea;
    double reguladorVolt;
public:
    Alternador() = default;
    Alternador(Color c,Marca m, double cos,int longPolea,int regula)
    :Piece(c,m,cos),longPolea(longPolea),reguladorVolt(regula){}
    void print() override{
        cout << "Polea: "<< longPolea<<endl;
    }
};























