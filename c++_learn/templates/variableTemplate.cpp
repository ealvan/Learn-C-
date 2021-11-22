#include <iostream>
using namespace std;

template<typename Res, typename ValType>
void sum(Res&result, ValType& value){
    result = result + value;
}
template<typename Res, typename First,typename ...Rest>
void sum(Res& result, First val1, Rest ...valN){
    result = result + val1;
    sum(result, valN...);
}

int main(){
    double dR = 0.0;
    sum(dR,-10,1,1,2);
    string result;
    sum(result, "Hello ",". I learn"," Variable"," Template");
    cout << "Double result: "<< dR << endl;
    cout << "String result: "<< result << endl;
    
}