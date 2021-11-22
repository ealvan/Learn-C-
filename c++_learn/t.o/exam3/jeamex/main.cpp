#include <iostream>
#include "pixelrgb.h"
#include "imagen.h"
using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    Imagen<float, 10, 10> matrix{};

    matrix.Data[1][1] = 10;
    matrix.Data[3][1] = 25;

    matrix.print();

    PixelRGB{3,4,5};
    return 0;
}
