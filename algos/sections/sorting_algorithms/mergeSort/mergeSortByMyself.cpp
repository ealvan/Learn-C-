#include "mergeSortModel.h"

template<typename Iterator>
void print(Iterator list){
    for(auto item: list ){
        cout << item << " ";
    }
    cout << endl;
}
template<size_t M, size_t P>
array<int,M+P> merge(array<int,M>& arr1, array<int,P>& arr2){
    cout << "Merge starts here......."<<endl;
    int i = 0, j = 0, k = 0;
    array<int,arr1.size()+arr2.size()> joined;
    cout << "a1: " << arr1.size() << " a2: "<< arr2.size() << " a3: "<<joined.size()<< endl;
    for(k = 0; k < joined.size(); k++){
        if(i < arr1.size() && j < arr2.size() && arr1[i] < arr2[j]){
            joined[k] = arr1[i];
            i++;
        }else if( i < arr1.size() && j < arr2.size() &&  arr1[i] > arr2[j]){
            joined[k] = arr2[j];
            j++;
        }else{
            break;
        }
    }
    
    if(i == arr1.size()){
        for(; k < joined.size();k++  ){
            // cout << "j= "<<j << " k= "<<k<< endl;
            joined[k] = arr2[j];
            j++;
        }
    }
    if(j == arr2.size()){
        for(; k < joined.size(); k++){
            joined[k] = arr1[i];
            i++;
        }
    }
    cout << "joined ";
    print(joined);  
    return joined;
}

//array<int,N>
template<size_t N>
array<int,N> mergeSortByMyself(array<int,N>& list){
    if(list.size() <= 1){
        return list;
    }
    const int firstPart = (const int)list.size()/2;
    array<int, firstPart> leftArr;
    int i;
    for(i=0; i < firstPart; i++){
        leftArr[i] = list[i];
    }
    array<int,list.size() - firstPart> rightArr;
    for(i=firstPart; i < list.size(); i++){
        rightArr[i-firstPart] = list[i];
    }
    print(list);
    print(leftArr);
    print(rightArr);

    leftArr = mergeSortByMyself(leftArr);
    rightArr = mergeSortByMyself(rightArr);

    array<int,list.size()> joined;
    if(leftArr[leftArr.size() -1] > rightArr[0]){
        joined = merge(leftArr,rightArr);
    }else{
        int y = 0;
        for(int g = 0; g < joined.size(); g++){
            if(y < leftArr.size()){
                joined[g] = leftArr[y];
            }else{
                joined[g] = rightArr[y-leftArr.size()];
            }
            y++;
        }
    }
    return joined;
}
template array<int,12> mergeSortByMyself(array<int,12>& list);


// int main(){
//     array<int,3> arr = {3,2,1};
//     // print(arr);
//     array<int,3> sorted = mergeSortByMyself(arr);
//     print(sorted);
//     // array<int,2> a = {1,2};
//     // array<int,1> b = {3};
//     // array<int,3> joined = merge(a,b);
//     // print(joined);
// }   