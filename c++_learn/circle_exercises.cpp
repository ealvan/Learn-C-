#include <iostream>
#include <string>
#include <cmath>
/*
4. Write a class Circle that computes the area 
    and circumference given a radius
    that is supplied to the class as a parameter 
    at the time of instantiation. Pi should be
    contained in a constant private member that 
    cannot be accessed from outside the
    circle
*/
using namespace std;

class Circle{
    private:
        const double pi = 22.0/7;
        int radio;
    public:
        constexpr Circle(int radio):radio(radio){}
        constexpr double getArea() const {  
            return pi*pow(radio,2); 
        };
        constexpr double getCircunference() const{
            return 2*pi*radio;
        }
};

int main(){
    const Circle data(3);
    const double area = data.getArea();
    const double perimeter = data.getCircunference();
    cout << "Area: "<< area << endl
    << "Perimetro: "<< perimeter << endl;
}