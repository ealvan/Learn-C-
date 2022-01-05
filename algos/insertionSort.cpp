#include <iostream>
using std::cout;
using std::endl;

void print(int arr[],int n){
    for(int i=0;i<n;++i){
        cout << arr[i] <<" - ";
    }
    cout << endl;
}
void insertionSort(int arr[],int n){
    for(int i = 1; i < n;++i){
        int point = arr[i];
        int j = i-1;
        while( j >= 0 && arr[j] > point){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = point;
        // // int tmp = point;
        // int k;
        // for(k = i-1; k >= j+1; --k){
        //     arr[k+1] = arr[k];
        // }        
        // arr[j+1] = point;
    }
}


int main(){
    int arr[] = {12, 11, 13, 5, 6};
    int size = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,size);
    print(arr,size);

}