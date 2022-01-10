#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using std::vector;
using std::cout;
using std::endl;
using std::string;


bool isSetUnique_sinSort(int arr[],int n){
    bool ok = true;
    for(int i = 0; i < n; ++i){
        for(int j = i+1; j < n; ++j){
            if(arr[j] == arr[i]) ok = false;
        }
    }
    return ok;
}


bool isSetUnique(int arr[],int n){
    std::sort(arr,arr+n);
    bool is = true;
    for(int i = 0; i < n; ++i){
        if( arr[i] == arr[i+1]){is = false; break;} 
    }
    return is;
}




int main(){
    int arr[] = {1,2,3,4,-1,2,1,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    isSetUnique(arr,n) ? cout << "Es unico": cout << "No es unico";
    cout << endl;
    isSetUnique_sinSort(arr,n) ? cout << "Es unico": cout << "No es unico";
    cout << endl;
}