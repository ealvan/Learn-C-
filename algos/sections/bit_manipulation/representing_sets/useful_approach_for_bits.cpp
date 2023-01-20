#include <bits/stdc++.h>

using namespace std;

void printOptions(uint8_t flag){
    //General use
    for(int i = 0; i <= 7; i++){
        cout << "Option#"<<i;
        if(flag&(1<<i)) cout <<" is ON";
        else cout << " is OFF";
        cout << endl;
    }
    cout << "\n************************************\n";
}
//we can use bits for multiple options
void options(){
    uint8_t op0 = 1 << 0;
    uint8_t op1 = 1 << 1;
    uint8_t op2 = 1 << 2;
    uint8_t op3 = 1 << 3;
    uint8_t op4 = 1 << 4;
    uint8_t op5 = 1 << 5;
    uint8_t op6 = 1 << 6;
    uint8_t op7 = 1 << 7;
    
    uint8_t flag = 0x00;
    //is it my flag has op1?
    cout << "Option1 is: "<<((static_cast<bool>(flag & op1)) ? "On": "OFF") <<endl;

    //Turn ON specific bits, op1,op4 and op6, which means enable specific options
    flag |= op1 | op4 | op6;
    printOptions(flag);

    //Turn OFF specific bits op1 and op4, which means disable specific options
    flag &= ~(op1 | op4);
    printOptions(flag);

    //FLIP bits op6 and op7, which means flip options
    flag ^= (op6|op7);
    printOptions(flag);

    

}

int main(){
    options();
}