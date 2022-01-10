#include <iostream>
#include <vector>
#include <cmath>

using std::vector;
using std::cout;
using std::endl;
using std::string;

void andOps(){
    int num = 22&26;
    cout << num << endl;
/*
    10110 (22)
  & 11010 (26) 
------------------
    10010 (18) .
*/
// x is divisible for 2^k, when x &(2^k-1) = 0
//12 is divisible for 2^2, when 12&(2^2-1) = 0
    int x = 12;
    int y = 3;//2^k-1 , k=2
    if(x & (y) == 0){
        cout << "12 es divisible por 4"<<endl;
    }else{
        cout << "12 NO es divisible por 4"<<endl;
    }
}
void notOps(){
    int x = 12;
    //convert to negative int
    // ~x = -x -1;
    int y = ~x+1; 
    cout << y << endl; 
}

void bitShifts(){
    // x << k : x*(2^k)
    // k >> x : x/(2^k)
    int x = 12;
    int r = x << 2;
    cout << r << endl; // 12*(2^2) = 48
    r = x >> 2;
    cout << r << endl; // 12/(2^2) = 3
}

void bitMasks(){
    //print representation of number with bitmasks
    int x =  5;
    for(int i = 31; i >= 0; --i){
        if(i%4 == 0) cout << " ";
        //x&(1<<i), nos da el i'havo bit dle numero "x"
        if(x&(1<<i)) cout << "1";
        else cout << "0";
    }
    cout << endl;
    //----------------------------
    //change a i'th bit to 1
    //0000 0000 0000 0000 0000 0000 0000 01"0"1
    x = x|(1<<1);//change position 1'th to "1"
    //0000 0000 0000 0000 0000 0000 0000 01"1"1
    cout << "**"<<x << endl;// 7
    cout << endl;
    //-------------------------------------------
    //change position k'th to 0
    x = 4;
    x = x&~(1<<2);
    cout << x << endl;
    //-------------------------------------------
    //inversion de bits
    //1 -> 0
    //0 -> 1
    x = 5;
    for(int i = 31; i >= 0;--i){
        x = x^(1 << i);
        if(i%4 == 0) cout << " ";
        //x&(1<<i), nos da el i'havo bit dle numero "x"
        if(x&(1<<i)) cout << "1";
        else cout << "0";
    }
    cout << endl;
    //-----------------------
    // set the last ine bit to 0
    int y = std::pow(2,31)-1;
    for(int k = 31; k >= 0; --k){
        if(x&(1<<k))cout << "1";    
        else cout << "0";
    }
    cout << endl;
    y = y &(y-1);
    for(int k = 31; k >= 0; --k){
        if(x&(1<<k))cout << "1";    
        else cout << "0";
    }
    cout << endl;
}





int main(){
    bitMasks();
    // bitShifts();
    // andOps();
    // notOps();
}