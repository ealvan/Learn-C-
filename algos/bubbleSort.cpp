#include <iostream>
using std::cout;
using std::endl;

void bubbleSort(int arr[],int n){
    int count;
    bool on = true;
    while(on){
        count = 0;
        for(int i = 0; i < n-1; ++i){
            if(arr[i] > arr[i+1]){
                int tmp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = tmp;
            }
            else{
                ++count;
            }
        }
        if(count == n-1){
            on = false;
        }
    }
}
void print(int arr[],int n){
    for(int i=0;i<n;++i){
        cout << arr[i] <<" - ";
    }
    cout << endl;
}

int main(){
    int arr[] = {1,2,42,5,56,75,3,321,6,75,23,12};
    int size = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,size);
    print(arr,size);
}