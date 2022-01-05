#include <iostream>
using std::cout;
using std::endl;

void swap(int* a,int* b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
int getMinIndex(int i,int n, int arr[]){
    int minIdx = i;
    for(int j=i+1; j < n;++j){
        if(arr[j] < arr[minIdx]){
            minIdx = j;
        }
    }
    return minIdx;
}


void print(int arr[],int n){
    for(int i=0;i<n;++i){
        cout << arr[i] <<" - ";
    }
    cout << endl;
}

void selectionSort(int n,int arr[]){
    for(int i = 0; i < n-1; ++i){
        int minIndex = getMinIndex(i,n,arr);        
        swap(&arr[minIndex],&arr[i]);
    }
}

int main(){
    int arr[] = {3,2,4,12,42,1,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    selectionSort(size,arr);
    print(arr,size);
}