#include <iostream>
#include "./Piece/pieces.h"

int main(){
    Llanta o(12,120,Tipo::AltoDesenpenio,Color::BLACK,Marca::MERAKI,140);
    std::cout << o <<std::endl;
}