#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <utility>
using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::pair;
using std::max;

void print(vector<pair<int,int>>& evs){
    for(int i = 0; i < evs.size(); ++i){
        cout << evs[i].first << " / "<<evs[i].second << endl;
    }
}

bool isLeft(int lefts[],int n, int val){
    for(int i = 0; i < n; ++i){
        if(lefts[i] == val) return true;
    }
    return false;
}
void sweepLine(int arr[], int n){
    int lefts[n/2];
    
    //true = inicio
    //false = fin
    int k = 0;
    for(int i = 0; i < n; i+=2){
        if(i%2 == 0){
            lefts[k] = arr[i];
            ++k;
        }
    }
    int best = 0;
    vector<int> eventos;
    std::sort(arr,arr+n);
    for(int i = 0; i < n; ++i){
        int item = arr[i];
        if(isLeft(lefts,n/2,item)){
            eventos.push_back(item);
        }else{
            eventos.pop_back();
        }     
        best =  max(best,(int)eventos.size());
    }
    cout << best << endl;
}


int main(){
    int renvents[] = {1,2,11,12,5,9,6,10,4,7};
    int size = sizeof(renvents)/sizeof(renvents[0]);
    sweepLine(renvents,size);
    
    // vector<pair<int,int>> events;
    // events.reserve(size/2);
    // for(int i = 0; i < size; i+=2){
    //     events.push_back({renvents[i],renvents[i+1]});
    // }
    // print(events);
    
}  
