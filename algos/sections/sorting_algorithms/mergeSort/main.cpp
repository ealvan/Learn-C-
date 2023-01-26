#include "mergeSortModel.h"
using namespace std;

int main(){
    array<int,12> arr = {27, 30, 80, 46, 53, 15, 76, 24, 95, 96, 35, 80};
    array<int,12> arrSorted = mergeSortByMyself(arr);
    print(arrSorted);
    // array<int,6> arr1 = {15, 27, 30, 46, 53, 80};
    // array<int,6> arr2 = {24, 35, 76, 80, 95, 96};
    // print(merge(arr1,arr2));
    
}