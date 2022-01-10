#include <iostream>
#include <vector>
#include <cmath>

using std::vector;
using std::cout;
using std::endl;
using std::string;
int getIndex(int x, int y,int r){
    return x+y*r;
}
void print(int arr[], int r){
    for(int i = 0; i < r; ++i){
        for(int j = 0; j < r; ++j){
            cout << arr[getIndex(j,i,r)] << " ";
        }
        cout << endl;
    }
    cout << endl;
}



void fillCols(int arr[], const int r){
    //size of array is r**2
    for(int i = 0; i < r; i++){
        for(int j = 0; j < r; j++){
            arr[getIndex(j,i,r)] = j;
        }
    }
}

void fillDiag1(int arr[],const int r){
    for(int i = 0; i < r; ++i){
        for(int j = 0; j < r; ++j){
            arr[getIndex(j,i,r)] = i+j;            
        }
    }
}
void fillDiag2(int arr[],const int r){
    for(int i = r-1; i >=0; --i){
        for(int j = 0; j < r; ++j){
            arr[getIndex(j,i,r)] = ( r - 1 -i) + j ;            
        }
    }
}


const int r = 4;
bool cols[r*r]{0};
bool diag1[r*r]{0};
bool diag2[r*r]{0}; 
int count = 0;
int n = 4;
void search(int y){
    if(y == n){
        count++;
        return;
    }
    for(int x=0; x < n; ++x){ 
        cout << "Init..."<< endl;
        cout <<x <<" "<< x+y <<" "<< x-y+n-1 << endl;
        if(cols[x] || diag1[x+y] || diag2[x-y+n-1]) continue;
        cout <<"**"<< x <<" "<< x+y <<" "<< x-y+n-1 << endl;
        cols[x] = diag1[x+y] = diag2[x-y+n-1] = 1;
        search(y+1);
        cout << "After Search"<<endl;
        cols[x] = diag1[x+y] = diag2[x-y+n-1] = 0;
        cout <<x <<" "<< x+y <<" "<< x-y+n-1 << endl;
    }
    cout << "DONE!!"<<endl;
}

int main(){
    search(0);
    cout << "Posibilities: "<< count << endl;
}



