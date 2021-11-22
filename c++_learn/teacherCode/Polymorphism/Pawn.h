#ifndef PAWN_H
#define PAWN_H

#include <iostream>
#include "Piece.h"


class Pawn : public Piece
{
public:
    Pawn(){};
    std::string GetColor() const
    {
        std::cout<<"Pawn\n";
        return Color;
    }

    void SetColor(const std::string& color)
    {
        Color = color;

    }
    ~Pawn()
    {
        std::cout<<"Pawn destroyed\n";
    }





};

#endif // PAWN_H
