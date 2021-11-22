#include <iostream>
#include "Piece.h"
#include "Queen.h"
#include "Pawn.h"

#include <vector>

using namespace std;


void SetCell(const Piece& piece)
{
    std::cout<<"Set Cell "<<piece.GetColor()<<"\n";
}

void Move(const Piece& piece)
{
    std::cout<<"Move "<<piece.GetColor()<<"\n";
}

void Move(Piece* piece)
{
    std::cout<<"Move "<<piece->GetColor()<<"\n";
}



int main()
{

    /*Queen queen{};
    queen.SetColor("Black");
    //std::cout<<queen.GetColor()<<"\n";

    Pawn pawn{};
    pawn.SetColor("White");
    //std::cout<<pawn.GetColor()<<"\n";

    SetCell(queen);
    Move(pawn);
    Move(queen);

    //std::vector<Piece> board;

    //board.push_back(queen);
*/


    Piece *queen2 = new Queen{};
    queen2->SetColor("Black");
    queen2->GetColor();
    Move(queen2);
    delete queen2;






    return 0;
}
