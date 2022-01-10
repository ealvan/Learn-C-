#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <tuple>

using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::tuple;

tuple<bool,int> binSearch(int arr[], int n,int val){
    std::sort(arr,arr+n);
    tuple<bool,int> tup;
    std::get<0>(tup) = false;
    std::get<1>(tup) = -1;
    
    int a = 0;
    int b = n-1;
    while(a <= b){
        int k = (a+b)/2;
        if(arr[k] == val){
            std::get<0>(tup) = true;
            std::get<1>(tup) = k;
            return tup;
        }
        if(arr[k] < val){
            a = k+1;
        }
        if(arr[k] > val){
            b = k-1;
        }
    }
    return tup;
}
void print(int arr[], int n){
    for(int i = 0; i < n; ++i){
        cout << arr[i] << " ";
    }
    cout << endl;
}

//another binserach with jumps
void jumpSearch(int arr[], int n,int val){
    std::sort(arr,arr+n);
    print(arr, n);   
    int jump = 0;
    for(int b = n/2; b >= 1; b /= 2){
        while(jump+b < n && arr[jump+b] <= val){
            cout << "hola"<<endl;
            jump+= b;
        }
    }
    if(arr[jump] == val){
        cout << "Se logro !!"<<endl;
    }
}

int main(){
    int arr[] = {-1,2,6,2,12,423,54,2,1,2,3,0,0,-100'000,1,5};
    //0,1,2,3,4,5,6,7
    int n = sizeof(arr)/sizeof(arr[0]);
    jumpSearch(arr, n, 5);
    // tuple<bool,int> tup = binSearch(arr,n,13);   
    // cout << "Index is: "<< std::get<1>(tup)<< endl;
}