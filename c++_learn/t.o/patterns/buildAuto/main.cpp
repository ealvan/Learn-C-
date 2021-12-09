#include <iostream>
// #include "./Piece/pieces.h"
#include "./Auto/auto.h"

int main(){
    Alternador a(Color::BLACK,Marca::MERAKI,12.34,123,12.5);
    Automovil uno;
    uno.addItem(&a);
    uno.getItems()[0]->print();
    
    // Llanta o(12,120,Tipo::AltoDesenpenio,Color::BLACK,Marca::MERAKI,140);
    // std::cout << "Color : "<< o.getColor()<<endl;
    // std::cout << o <<std::endl;
}