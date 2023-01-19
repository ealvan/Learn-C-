#include <bits/stdc++.h>
using namespace std;

#define bits_integer 32

void getLower_and_UpperBound(){
    cout << "The upperlimit of Integers(2**(n-1)-1) is :\n";
    cout << "Macro INT_MAX says: "<<INT_MAX << endl;
    cout << "Mathematics says (2^(n-1))-1: "<<(int)pow(2,bits_integer-1)-1 << endl;
    cout << (INT_MAX == (int)pow(2,bits_integer-1) -1) << endl;
    //*****************************************************************************
    cout << "The lower limit of integers is: \n";
    cout << "Macro MIN_MAX says: "<< INT_MIN << endl;
    cout << "Mathematics says (-2**(n-1)): "<<(int)pow(2,bits_integer-1)<<endl;
    cout << (INT_MIN == (int)-1*pow(2,bits_integer-1)) << endl;

}

void getUNSIGNEDLower_and_UpperBound(){
    //UNSIGNED INT -> 0 -> 2**n-1;
    cout << "UNSIGNED OVERFLOW:\n";
    unsigned int x = 0;
    cout << "LOWER BOUND: " << x <<" + -1 = "<< (x-1) << endl;
    x = UINT_MAX;
    cout << "UPPER BOUND: " << x <<" + 1 = "<< (x+1)<<endl;
}

void exampleSignedOverflow(){
    int max_value = INT_MAX;//(int)pow(2,bits_integer-1)-1;
    max_value +=1;
    cout << "UPPER OVERFLOW_INTEGERS: \n"<< INT_MAX << " + "<<"1 = "<<max_value<< endl;
    int min_value = INT_MIN;
    min_value -=1;
    cout << "LOWER OVERFLOW_INTEGERS: \n";
    cout << INT_MIN << " + "<< "1 = " << min_value << endl;
}




int main(){
    getLower_and_UpperBound();
    cout << "****************************"<<endl;
    exampleSignedOverflow();
    cout << "****************************"<<endl;
    getUNSIGNEDLower_and_UpperBound();
}