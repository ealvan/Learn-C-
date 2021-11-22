#ifndef IMAGEN_H
#define IMAGEN_H
#include "pixel.h"

class Imagen
{

private:
    using RowType = std::vector<std::vector<int>>;
    using MatrixType =  std::vector< RowType >;
    MatrixType Data{ MatrixType(4, RowType(5,{3}))};

public:

    Imagen() = default;


    Imagen(int tam):
        Data{MatrixType(tam,RowType(tam,{3}))}{

    }
    void Print() {
        for(int i = 0; i < Data.size(); i++) {
            for(int j = 0; j < Data.size(); i++) {
                std::cout << Data[i][j].size() << " ";
            }
        }
    }

};

#endif // IMAGEN_H
