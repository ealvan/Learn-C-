#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using std::vector;
using std::cout;
using std::endl;
using std::string;

void print(int arr[], int n){
    for(int i = 0; i < n; ++i){
        cout << arr[i] << " ";
    }
    cout << endl;
}
void countSort(int arr[], int n){
    int max = *std::max_element(arr,arr+n);
    int min = *std::min_element(arr,arr+n);
    
    const int range = max -min +1;

    int count[range];
    for(int i = 0; i < range; ++i){
        count[i] = 0;
    }
    for(int i = 0; i < n; ++i){
        count[arr[i]-min]++;
    }
    print(arr,n);
    print(count,range);
    //acumular
    for(int i = 1; i <range; ++i){
        count[i] += count[i-1];        
    }
    print(count,range);
    int output[n];
    for(int i = 0; i < n ; ++i){
        output[i] = 0;
    }
    for(int i = 0; i < n; ++i){
        int item = arr[i] - min;
        int countItem = count[item]; 
        output[countItem-1] = arr[i];
        count[arr[i] - min]--;
        cout << "**"<<arr[i]<<" "<<arr[i] -min <<" "<<count[item]<<" "<<arr[i]<<" "<< countItem-1<< endl;
    }
    print(output,n);
}

int main(){
    int arr[] = {-1,4,2,2,-1};
    int n = sizeof(arr)/sizeof(arr[0]);
    countSort(arr,n);
}