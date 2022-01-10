#include <iostream>
#include <vector>
#include <cmath>

using std::vector;
using std::cout;
using std::endl;
using std::string;

void subSumSubArray_v1(int arr[],int n){
    int best = 0;
    string str;
    for(int i = 0; i < n;++i){
        for(int j = i; j < n; ++j){
            int sum = 0;
            str = "";
            for(int k = i; k <= j; ++k){
                sum += arr[k];
                str += std::to_string(arr[k])+" ";
            }
            best = std::max(best,sum);      
        }
    }
    cout << str << endl;
    cout << "the best sub sum in array: "<<best << endl;
}

void subSumSubArray_v2(int arr[], int n){
    int best = 0;
    for(int i = 0; i < n; ++i){
        int sum = 0;
        for(int j = i; j < n;++j){
            sum += arr[j];
            best = std::max(best,sum);
        }
    }
    cout << "the best sub sum in array: "<<best << endl;
}

void subSumSubArray_v3(int arr[], int n){
    int best =0, sum = 0;
    for(int k=0; k < n; ++k){
        sum = std::max(arr[k],sum+arr[k]);
        best = std::max(best,sum);
        cout << sum <<" "<<best<< endl;
        //sum  1 -1 1000 999  1002 2   
        //best 1 1  1000 1000 1002 1002 
    }
    cout << "the best sub sum in array: "<<best << endl;
}


int main(){
    int arr[] = {1,-2,1000,-1,3,-1000};
    int n = sizeof(arr)/sizeof(arr[0]);
    subSumSubArray_v3(arr,n);
}