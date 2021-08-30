#include <iostream>
using namespace std;
//same length of side
union square{
    int hight;
    int width;
};
int getArea(int height, int witdh){
    return height*witdh;
}
int main(){
    union square sq;
    sq.hight = 200;
    cout << "The area of square is: "<< getArea(sq.hight,sq.width) << endl;
}

