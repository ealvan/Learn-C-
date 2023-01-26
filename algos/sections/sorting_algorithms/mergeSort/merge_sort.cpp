#include <bits/stdc++.h>
using namespace std;
#define N 7
template<typename Iterable>
void print(Iterable& arr){
    for(auto item: arr)
    {
        cout << item << " ";
    }
    cout << endl;
//    cout <<endl<<"*********************"<< endl;
}
template<size_t P,size_t Q>
array<int,P+Q> merge(array<int,P> &arr1, array<int,Q> &arr2){
    // cout << "Joined operation starts here..............."<<endl;
    
    int i = 0, j = 0,k = 0;
    array<int,arr1.size()+arr2.size()> joined;
    
    // cout << "a1: "<<arr1.size()<<" a2: "<<arr2.size() <<" a3: "<<joined.size()<<endl;
    for(k = 0; k < joined.size(); k++){
        if(i < arr1.size() && j < arr2.size() && arr1[i] < arr2[j]){
            joined[k] = arr1[i];
            i++;
        }else if(j < arr2.size() && i < arr1.size() && arr1[i] >= arr2[j]){
            joined[k] = arr2[j];
            j++;
        }else{break;}
    }
    if(i >= arr1.size()){
        for(; j < arr2.size(); j++){
            joined[k] = arr2[j];
            k++;
        }
    }
    if(j >= arr2.size()){
        for(; i < arr1.size(); i++){
            joined[k] = arr1[i];
            k++;
        }
        // joined[joined.size()-1] = arr2[j];
    }

    // else{
    //         joined[k] = arr1[i];
    //         joined[k+1] = arr2[j];
    //         i++;j++;k++;
    //     }
    print(joined);
    // cout << "Joined operation ends here..............."<<endl;
    return joined;
    // return joined;
}

template<size_t NN>
array<int,NN> mergeSort(array<int,NN> &nms){

    if(nms.size() <= 1){
        // print(nms);
        return nms;
    }
    const int items = nms.size();
    //first part goes [0,items/2]
    const int firstItems = (int) items/2;
    array<int, firstItems> first_part;
    //second part goes[firstItems+1, end]
    const int secondItems = items - firstItems;
    array<int, secondItems> second_part;
    // // cout << "first: "<<firstItems << " Second: "<<secondItems<<endl;
    int i;  
    for(i = 0; i < firstItems; ++i){
        first_part[i] = nms[i];
    }
    i = firstItems;
    for(; i < items; ++i){
        second_part[i-firstItems] = nms[i];
    }
    print(nms);
    print(first_part);
    print(second_part);
    // cout <<endl<<"*********************"<< endl;
    first_part = mergeSort(first_part);
    second_part = mergeSort(second_part);
    array<int, first_part.size()+second_part.size()> joined;
    if(first_part[first_part.size() - 1] > second_part[0]){
        joined = merge(first_part,second_part);
    }else{
        // cout << "Starts simple joined list..........................\n";
        int d= 0;
        for(int h = 0; h < joined.size(); h++){
            if(d < first_part.size()){
                joined[h] = first_part[d];
                d++;
            }else{
                joined[h] = second_part[d-first_part.size()];
                d++;
            }
        }
        // cout << "Ends simple joined list..........................\n";

    }

    return joined;    
}




int main(){
    const size_t items = 19;
    array<int,items> nms = {1,4,3,7,3,8,2,8,3,5,3,54,6,8,967,2,1,2,0};
    array<int,items> sorted = mergeSort(nms);
    cout << "\n|||||||||||\n";
    print(sorted);
    // array<int,1> a={-1};
    // array<int,1> b={0};
    // array<int,2> c = merge(a,b);
    // print(c);
    // print(c);
    // mergeSort(nms);
}
/*
0 1 1 2 2 2 3 3 3 3 4 5 6 7 8 8 8 54 967
0 1 1 2 2 2 3 3 3 3 4 5 6 7 8 8 8 54 967
*/