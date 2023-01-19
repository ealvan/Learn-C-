#include <bits/stdc++.h>
using namespace std;

void AND_operator(){
    cout << "AND operator\n";
    int x = 41;
    if(x & 1 == 1){
        cout << "It's odd"<<endl;
    }else{
        cout << "It's even"<<endl;
    }
    //*******************************
    unsigned char a = 0xff;
    unsigned char b = 0xaa;
    unsigned char c = a&b;
    printf("%02hhx & %02hhx = %02hhx\n",a,b,c);
}

void OR_operator(){
    cout << "OR operator\n";
    //set the last bit in 1.
    unsigned char a = 0xfa;
    unsigned char mask = 0x01;
    printf("%02hhx | %02hhx = %02hhx\n",a,mask, a|mask);
    //set the first bit in 1
    a = 0x7b;
    mask = 0x80;
    printf("%02hhx | %02hhx = %02hhx\n",a,mask, a|mask);
}
void XOR_operator(){
    cout << "XOR operator\n";
    unsigned char a = 0xaa;
    unsigned char b = 0x99;
    printf("%02hhx ^ %02hhx = %02hhx\n",a,b, a^b);
}

void NOT_operator(){
    cout << "NOT operator(~x = -x -1)\n";
    unsigned char a = 0xfa;
    printf("~ %02hhx = %02hhx\n",a,~a);

}

void BIT_shifts(){
    cout << "BIT shifts:"<<endl;
    unsigned char num = 0xff;
    unsigned char bits[8];
    unsigned char mask = 0x80;
    //prints bit by bit the "num" variable
    for(int n = 7; n >= 0; n--){
        // printf("num= %02hhi & mask= %02hhi = %02hhi\n", num,mask, num&mask);
        if((num & mask) >> 7) cout << "1 ";
        else cout << "0 ";
        num = num << 1;
    }
    cout << endl;
}

int main(){
    AND_operator();
    OR_operator();
    XOR_operator();
    NOT_operator();
    BIT_shifts();
}