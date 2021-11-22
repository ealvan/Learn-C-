#include <iostream>
using namespace std;

template<typename T>
class TestStatic{
public:
    static int staticVal;
};
// static member initialization//IMPORTANT!!
template<typename T> int TestStatic<T>::staticVal;
//When there is a static value
//ONLY is shared for all objects with the same implementation
//Example:
//1. is there are Class<int> objs, Static values will be share 
//  for all same implementation objects

//2. when is Class<double> objs, is for 
//  all objecst with double template implementation

int main(){
    TestStatic<double> obj1;
    cout << "Setting staticVal in DOUBLE to 2021:"<<endl;
    obj1.staticVal = 2021;
    
    TestStatic<int> obj2;
    cout << "Setting staticVal in INT to 3021:"<<endl;
    obj2.staticVal = 3021;
    //Display static values
    cout << "Static Value for INT's: "<< TestStatic<int>::staticVal<<endl;
    cout << "Static Values for DOUBLE's: "<< TestStatic<double>::staticVal << endl;
}