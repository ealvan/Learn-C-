#include <iostream>
// #include "./Piece/pieces.h"
//#include "./Auto/auto.h"
#include "./Director/director.h"

int main(){
    cout <<"TESLA"<<endl;
    Director dir(new Tesla());
    dir.makeAuto();
    Automovil* autom = dir.getAuto();
    autom->print();
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout <<"TOYOTA"<<endl;
    Director dir1(new Toyota());
    dir1.makeAuto();
    Automovil* autom1 = dir.getAuto();
    autom1->print();
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout << "NORMAL standard"<<endl;
    Director dir2(new Normal());
    dir2.makeAuto();
    Automovil* autom2 = dir2.getAuto();
    autom2->print();
    // BuilderAuto* uno = new Normal();
    // uno->makeAuto();
    // Automovil* re = uno->getAuto();

    // re->print();

    // delete uno;
    // Alternador a(Color::BLACK,Marca::MERAKI,12.34,123,12.5);
    // Automovil uno;
    // uno.addItem(&a);
    // uno.getItems()[0]->print();
    
    // Llanta o(12,120,Tipo::AltoDesenpenio,Color::BLACK,Marca::MERAKI,140);
    // std::cout << "Color : "<< o.getColor()<<endl;
    // std::cout << o <<std::endl;
}