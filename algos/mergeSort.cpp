#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;
const int generalCount = 0;

void print(vector<int>& arr){
    for(int i=0; i < arr.size(); ++i){
        cout << arr[i] <<" - ";
    }
    cout << endl;
}

vector<int> agregar(vector<int> toadd, vector<int> res){
    for(int item: toadd){
        res.push_back(item);
    }
    return res;
}

//2,3
//4,6
vector<int> merge(vector<int>& left,vector<int>& right){
    int res = left.size() + right.size();

    vector<int> result;
    result.reserve(res);

    int countLeft = left.size();
    int countRight = right.size();
    
    int initLeft = 0;
    int initRight = 0;
    
    int i = 0;
    //2,3, 
    while(initLeft < countLeft && initRight < countRight){
        if(left[initLeft] < right[initRight]){
            result.push_back(left[initLeft]);
            // result[i] = left[initLeft];
            initLeft++;
            //--countLeft;
        }else{
            result.push_back(right[initRight]);
            // result[i] = right[initRight];
            initRight++;
            //--countRight;
        }
        ++i;
    }

    while(initLeft < countLeft){
        result.push_back(left[initLeft]);
        ++i;
        initLeft++;
    }
    while(initRight < countRight){
        result.push_back(right[initRight]);
        ++i;
        initRight++;
    }
    
    return result;

}

vector<int> mergeSort(vector<int>& arr){
    if(arr.size() <= 1){
        return arr;
    }
    vector<int> result;
    result.reserve(arr.size());

    int size = arr.size();
    int middle = size/2;
    
    vector<int> left;
    left.reserve(middle);
    
    vector<int> right;
    right.reserve(size - middle );

    for(int i = 0; i < middle; ++i){
        left.push_back(arr[i]);
    }
    for(int i = middle; i < size; ++i){
        right.push_back(arr[i]);
    }

    right = mergeSort(right);
    left = mergeSort(left);
    // print(left);
    // print(right);
    result = merge(left,right);
    
    return result;
}

int main(){
    vector<int> arr = {43,21,32,543,532,1,32,978,43,54,323231,12,23,4,5,3,5,6,7,7,7,4};
    vector<int> result = mergeSort(arr);
    print(result);
    // vector<int> m =merge(arr,arr1);
    // print(m);
}