#include <string>
#include <cstring>
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    string a = "2 3 1 5";
    char array[a.length()];    
    strcpy(array, a.c_str());

    char* token = strtok(array, " ");
    while(token != NULL){
        cout << token<< endl;
        token = strtok(NULL," ");
    }

}