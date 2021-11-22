#ifndef QUEEN_H
#define QUEEN_H

#include <iostream>
#include "Piece.h"

class Queen: public Piece
{
public:
    Queen(){};

    std::string GetColor() const
    {
        std::cout<<"Queen\n";
        return Color;
    };
    void SetColor(const std::string& color)
    {
        Color = color;
    };

    ~Queen()
    {
        std::cout<<"Queen destroyed\n";
    }

};

#endif // QUEEN_H
