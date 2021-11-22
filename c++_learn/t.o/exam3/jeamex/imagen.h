#ifndef IMAGEN_H
#define IMAGEN_H


#include <vector>
#include <iostream>

template <typename Type=int, unsigned rowsT=0, unsigned colsT=0>
class Imagen
{

public:
    using RowType = std::vector<Type>;
    using MatrixType =  std::vector< RowType >;

    MatrixType Data{ MatrixType(rowsT, RowType(colsT, Type{} ))};

    unsigned Rows{rowsT};
    unsigned Cols{colsT};

public:

    Imagen() = default;
    Imagen(unsigned rows, unsigned cols):
        Data{ MatrixType(rows,  RowType(rowsT, Type{}))},
        Rows{rows},
        Cols{cols}
    {

    }
    friend  Imagen operator+(const Imagen& a, const Imagen& b);
    friend  Imagen operator+(const Imagen& a, const int& s);
    friend  Imagen operator+(const int& s, const Imagen& a);

    void print() {
        for(int i = 0; i < Data.size(); i++) {
            for(int j = 0; j < Data.size(); j++){
                std::cout << Data[i][j] << " ";
            }
            std::cout <<  "\n ";
        }
    }

};

template <typename Type=int, unsigned rowsT=0, unsigned colsT=0>
Imagen<Type> operator+(const Imagen<Type>& a, const Imagen<Type>& b)
{


}

template <typename Type=int, unsigned rowsT=0, unsigned colsT=0>
Imagen<Type> operator+(const Imagen<Type>& a, const Imagen<Type>int& s)
{

}

Imagen<Type> operator+(const int& s, const Imagen<Type>& a)
{
    return a+s;
}


#endif // IMAGEN_H
