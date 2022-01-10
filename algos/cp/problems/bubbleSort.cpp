#include <iostream>
#include <vector>
#include <cmath>

using std::vector;
using std::cout;
using std::endl;
using std::string;

void swap(int &a, int& b){
    int tmp = a;
    a = b;
    b = tmp;
}

void bubbleSort(int arr[], int n){
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n-1; ++j){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
void print(int arr[], int n){
    for(int i = 0; i < n; ++i){
        cout << arr[i] << " ";
    }    
    cout << endl;
}

int main(){

    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,n);
    print(arr,n);

}