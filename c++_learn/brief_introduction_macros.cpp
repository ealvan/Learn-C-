#include <iostream>
#include <string>
using namespace std;

#define ARRAY_SIZE 25
#define PI 3.1416
#define MY_DOUBLE double
#define FAV_WHISKY "Jack Daniels"
//MACRO REPLACE A WORD FOR OTHER WORD.
//MACRO MAKES TECT SUBSTITUTIONS
//preprocesor don't check correct sintaxis.
//ONLY replace, if you have a hidden mistake,
//Compiler check, but no PREPROCESSOR
//Preprocesor dont define types of data
//Only do text substitution
//PI is replace for 3.14, and so on, so forth.
int main(){
    int arr[ARRAY_SIZE]={0};
    int len = sizeof(arr)/sizeof(int);
    cout << "Length of array: " << len << endl;
    MY_DOUBLE d ;
    cout << "Enter a double number:"<<endl;
    cin >> d;
    cout << "Circle Area: "<< d*d*PI<<endl;
    string favW(FAV_WHISKY);
    cout << "My Favorite Whisky: "<< favW<<endl;
}