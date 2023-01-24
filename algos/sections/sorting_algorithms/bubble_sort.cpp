#include <bits/stdc++.h>
using namespace std;
#define N 6
int counter = 0;
void swap(int *a, int* b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
    counter++;
}
void print(int arr[N]){
    for(int i = 0; i< N; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "#SWAPS = "<< counter<<endl;
}
void bubbleSort(int arr[N]){
    for(int i=0; i < N; ++i){
        for(int j = 0; j < N-1; ++j){
            if(arr[j] > arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
        // cout << "Round #"<< i << endl;
    }
    print(arr);
}

void bubble_sort_another_form(int arr[N]){
    bool swapped = false;
    do{
        for(int i = 0; i < N-1; i++){
            if(arr[i] > arr[i+1]){
                swap(&arr[i],&arr[i+1]);
                swapped = true;
            }
        }
    }while(swapped);
    print(arr);
}
void bubble_sort_improved_v1(int arr[N]){
    int n = N,newn;
    do{
        newn=0;
        for(int i = 1; i <= n-1;i++){
            if(arr[i-1] > arr[i]){
                swap(&arr[i-1],&arr[i]);
                newn = i;//track the last position in which is sorted.
                //From this position to the "n-1".
            }
        }
        n = newn;
    }while(!(n<=1));
    print(arr);
}
void bubble_sort_improved_v2(int arr[N]){
    //Bubble sort carry the largest element in the last place.
    //So It doesn't make sense do a loop to the last two elements,
    //because they are already ordered.
    //So rested that loop to the next loop can be a more efficien way
    //to implement it. 
    bool swapped = false;
    int n = N;
    do{ 
        swapped = false;
        for(int i = 1; i <= n-1; i++){
            if(arr[i-1] > arr[i]){
                swap(&arr[i-1],&arr[i]);
                swapped = true;
            }
        }
        n = n -1;//ignoring the last couple of numbers,
        //they area already ordered.
    }while(swapped);
    print(arr);
}

void bubble_sort_improved_test(int arr[N]){
    bool swapped = false;
    int n = N;
    do{
        swapped = false;
        for(int j = 1; j <= n-1; j++){
            if(arr[j-1] > arr[j]){
                swap(&arr[j-1],&arr[j]);
                swapped = true;
            }
        }
        n = n-1;
    }while(swapped);
    print(arr);
}

int main(){
    int arr[N] = {5,4,3,2,1,0};
    // bubbleSort(arr);
    // bubble_sort_improved(arr);
    // bubble_sort_another_form(arr);
    // bubble_sort_improved_v2(arr);
    bubble_sort_improved_test(arr);
}