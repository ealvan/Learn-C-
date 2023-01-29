#include <bits/stdc++.h>
using namespace std;
#define N 7
template<typename Iter>
void print(Iter list){
    for(auto item: list){
        cout << item << " ";
    }
    cout << endl;
}

void binary_search(array<int,N>& arr,int x){
    sort(arr.begin(), arr.end());
    int init = 0, end =  N-1;
    while(init <= end){
        int k =  (init+end)/2;
        if(arr[k] ==  x){
            cout << "It's in the array in position arr["<<k<<"]\n";
            return;
        }
        if(arr[k] > x) end = k-1;
        else init = k+1;
    }
    cout << "The item "<<x << " was not found in the array\n";
}
void binary_search_jumping(array<int,N>& arr, int x){
    sort(arr.begin(),arr.end());
    print(arr);
    int k = 0;
    int n = N;
    int b;
    for(b = n/2; b >= 1; b /= 2 ){
        cout << "k: "<< k <<" b: "<< b <<" arr[k+b]= "<<arr[k+b]<< "<= x: "<< x <<endl;
        //if it's false, b is divide by 2, each time, until is found
        while(k+b < n && arr[k+b] <= x){
            cout << "Entering k: "<< k <<" b: "<< b <<" arr[k+b]= "<<arr[k+b]<< "<= x: "<< x <<endl;
            k += b;
            cout << "Entering k: "<< k <<" b: "<< b <<" arr[k+b]= "<<arr[k+b]<< "<= x: "<< x <<endl;
        }
    }
    cout << "\nk: "<<k << " b: "<<b<<endl;
    if(arr[k] == x){
        cout << "Element: "<< x << " was found in "<< k << " index\n";
    }
}
int main(){
    array<int,N> arr = {4,3,5,-1,6,5,7};
    // binary_search(arr, -1);
    binary_search_jumping(arr,7);
}