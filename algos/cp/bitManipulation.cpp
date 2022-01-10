#include <iostream>
#include <vector>
#include <cmath>

using std::vector;
using std::cout;
using std::endl;
using std::string;

void bitBoundariesSigned(){
    //limites de un Signed int
    // −2^31 and 2^31 − 1.
    int x = std::pow(2,31)-1;
    cout << "Antes: "<<x << endl;  //2147483647  
    x++;
    cout << "Ahora: "<< x << endl;// -2147483648    
}
void bitBoundariesUnsigned(){
    //between 0 and 2^32 − 1.
    unsigned int x = std::pow(2,32)-1;
    cout << "Antes: "<<x << endl;    
    x++;
    cout << "Ahora: "<< x << endl;        
}
void conversionToSignedToUnsigned(){
    int x = -43;
    unsigned int y = x;
    cout << x << endl;//-43 = x
    cout << y << endl;// 2^32 -43 = 2^32 - x
}


int main(){
    conversionToSignedToUnsigned();
    bitBoundariesUnsigned();
}