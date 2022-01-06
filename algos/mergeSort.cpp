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
    for(int& item: toadd){
        res.push_back(item);
    }
    return res;
}

//2,3
//4,6
vector<int> merge(vector<int>& left,vector<int>& right){
    int res = left.size() + right.size();
    vector<int> result{res,-1};
    result.reserve(res);
    int countLeft = left.size();
    int countRight = right.size();
    int initLeft = 0;
    int initRight = 0;
    int i = 0;
    //2,3, 
    while(initLeft < countLeft && initRight < countRight){
        if(left[initLeft] < right[initRight]){
            result[i] = left[initLeft];
            initLeft++;
            //--countLeft;
        }else{
            result[i] = right[initRight];
            initRight++;
            //--countRight;
        }
        ++i;
    }
    cout <<"IDx:"<< i << endl;
    if(countLeft - initLeft  > 0){
        result = agregar(left,result);
    }
    if(countRight - initRight > 0){
        result = agregar(right,result);
    }
    return result;

}

vector<int> mergeSort(vector<int>& arr){
    if(arr.size() == 1){
        return arr;
    }
    vector<int> result;
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

    if(left[left.size()-1] < right[0]){
        for(int i = 0; i < size ; ++i){
            if(i < middle){
                result.push_back(left[i]);
            }else{
                result.push_back(right[i-middle]);
            }
        }
        return result;
    }
    arr = merge(left,right);
    return arr;
}



/*

    for(int i = 0; i < size; ++i){
        if(i < middle ){
            left.push_back(arr[i]);
        }else{
            right.push_back(arr[i]);
        }
    }
*/
int main(){
    vector<int> arr = {4,3,2,1};
    vector<int> result = mergeSort(arr);
    print(result);
    // vector<int> m =merge(arr,arr1);
    // print(m);
}