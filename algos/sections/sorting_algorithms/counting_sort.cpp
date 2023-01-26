#include <bits/stdc++.h>
using namespace std;

//COUNTING SORT
/*
1. Count all of item's times each appears in the input array.
2. Concatenate her results in a new array.
3. That's all.
This algorithm contains a tricky way to concatenate the results.
First, you need a counter array wich index is the array element
Second, you need sum the present array element with the previous item.
        tHIS is because we need to accumulate all these items like this:
        counterArray : 0 - 3 - 1 - 1 - 2 
        counterArray : 0 - (0+3) - (0+3+1) - (0+3+1+1) - (0+3+1+1)
        The last item in counterArray represent the size of the input array
        arr.size() ==  (0+3+1+1) (always)
        Because accumulate the number of times an element appears.
        This is very convenient, because we can say:
            "I just need to substract -1 to get the last index in sortedArray"
            "And update the counterArr[input[i]-1]-=1, to don't update the same element"
            "in the next loop, in which appears the same element."
        This is a useful way to do it in O(n+k) time, where K i range of non-negative values.
        So, when a input item appears many times, we just substract each time, to 
        update the sortedArray index.
        "Always have to do -1, because the last item in sortedArray is input.size() - 1,"
        "and remeber that input.size() is equal to counterArray[counterArray.size() - 1 ]"
        "In other words, it's the last item which always contains the maximum index in sortedArray".

        I think the same happens with another input items as a index in counterArray.
*/

template<typename Iterator>
void print(Iterator list){
    for(auto item: list){
        cout << item << " ";
    }
    cout << endl;
}

template<size_t S>
array<int,S> counting_sort(array<int,S> arr, const size_t maxItem){
    //find the maximun value;
    // const int  maxItem = *max_element(arr.begin(),arr.end());
    // cout << maxItem << endl;
    //create counter array initialize in 0
    array<int,arr.size()+1> counterArr = {0};
    for(int i = 0; i < arr.size(); ++i){
        counterArr[arr[i]]++;
    }
    // print(counterArr);
    //Fill the a new sorted array
    array<int,arr.size()> sortedArr;
    int s=0;
    for(int i = 0; i < counterArr.size(); ++i){
        if(!counterArr[i])
            continue;
        for(int j = 0; j < counterArr[i]; j++){
            sortedArr[s] = i;
            s++;
        }
    }
    // print(sortedArr);
    return sortedArr;
}
#define MAX_ITEM 12
template<size_t S>
array<int,S> counting_sort_v2(array<int,S> arr){
    //find the maximun value;
    // const int  maxItem = *max_element(arr.begin(),arr.end());
    // cout << maxItem << endl;
    //create counter array initialize in 0
    array<int,MAX_ITEM+1> counterArr = {0};
    for(int i = 0; i < arr.size(); ++i){
        ++counterArr[arr[i]];
    }
    //counterArr[i] = counterArr[i-1]
    for(int i = 1; i < counterArr.size(); ++i){
        counterArr[i] += counterArr[i-1];
    } 
    // print(counterArr);
    //Fill the a new sorted array
    array<int,arr.size()> sortedArr;
    for(int i = 0; i < arr.size(); ++i){
        sortedArr[counterArr[arr[i]]-1] = arr[i];
        --counterArr[arr[i]];
    }
    // int s=0;
    // for(int i = 0; i < counterArr.size(); ++i){
    //     if(!counterArr[i])
    //         continue;
    //     for(int j = 0; j < counterArr[i]; j++){
    //         sortedArr[s] = i;
    //         s++;
    //     }
    // }
    print(sortedArr);
    return sortedArr;
}



#define N 5
int main(){
    array<int,10> arr = {4,3,2,1,12,12,12,3,3,3};
    const int max = N;//*max_element(arr.begin(),arr.end());//It means from 0 to 4, it's the counter array
    counting_sort_v2(arr);
}
