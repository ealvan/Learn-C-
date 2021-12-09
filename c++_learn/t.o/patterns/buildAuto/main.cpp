#include <iostream>
// #include "./Piece/pieces.h"
//#include "./Auto/auto.h"
#include "./BuilderAuto/builderAuto.h"

int main(){
    BuilderAuto* uno = new Normal();
    uno->makeAuto();
    Automovil* re = uno->getAuto();

    re->print();

    delete uno;
    // Alternador a(Color::BLACK,Marca::MERAKI,12.34,123,12.5);
    // Automovil uno;
    // uno.addItem(&a);
    // uno.getItems()[0]->print();
    
    // Llanta o(12,120,Tipo::AltoDesenpenio,Color::BLACK,Marca::MERAKI,140);
    // std::cout << "Color : "<< o.getColor()<<endl;
    // std::cout << o <<std::endl;
}