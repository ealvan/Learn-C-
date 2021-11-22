#ifndef PIXEL_H
#define PIXEL_H
#include <vector>
#include <iostream>
#include <numeric>

template <typename Type, unsigned sizeT=100>
class Pixel
{

private:

    std::vector<Type> Data;
    std::size_t Size;
/*
public:

    template <typename Type>;
    Pixel(const std::size_t& size):

    Data{std::vector<Type>(size, 0)},
        Size{sizeT}
    {

    }
*/
};



#endif // PIXEL_H
