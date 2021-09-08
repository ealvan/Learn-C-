#include <iostream>
using namespace std;

struct Temperature{
    double kelvin;
    Temperature(long double kelvin):kelvin(kelvin){}
};
Temperature operator"" _C(long double celsius){
    return Temperature(celsius+273);
}
Temperature operator"" _F(long double fahrenheit){
    return Temperature((fahrenheit+469.67)*5/9);
}

int main(){
    Temperature k1 = 31.73_C;
    Temperature k2 = 0.0_F;//no 0_C, 0 is interpreted 
                            //like integer and not 0.0_C
    cout<< "K1 is "<< k1.kelvin << " Kelvin"<<endl;
    cout << "K2 is "<< k2.kelvin << " Kelvin"<<endl;

}