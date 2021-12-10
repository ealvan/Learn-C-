#pragma once
#include <iostream>
#include <vector>
#include <time.h>
#include <stdlib.h>
/*
Un auto tiene
Motor
LLantas
------------
Color
Marca
costo
*/
using std::cout;
using std::endl;
using std::string;
using std::vector;

// using std::map;

enum Color{
    BLACK,
    RED,
    GREEN,
    BLUE
};
enum Marca{
    TOYOTA,
    TESLA,
    MERAKI
};
class Piece{
protected:
    Color color;
    Marca marca;
    double costo;
public:    
    Piece(Color c,Marca m, double cos)
    :color(c),marca(m),costo(cos){}  
    Piece() = default;

    void setColor(Color c){
        color = c;
    }
    void setMarca(Marca m){
        marca = m;
    }
    void setCosto(double c){
        costo = c;
    }
    int getColor(){
        return color;
    }
    virtual void print(){
        cout <<"\tColor: "<<color<<endl
        << "\tMarca: "<<marca<<endl
        <<"\tCosto: "<<costo<<endl;

    };
    virtual ~Piece(){
        //destructor virtual
    }
};




