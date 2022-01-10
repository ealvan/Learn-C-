#include <iostream>
#include <vector>
using std::vector;
using std::cout;
using std::endl;
using std::string;

vector<int> permutations;
const int n = 3;
bool chosen[n+1];

void printb(bool bs[],int n){
    for(int i = 0; i <n; ++i){
        cout << bs[i]<< " ";
    }
    cout << endl;

}
void print(vector<int>& vec){
    if(vec.size() == 0){
        cout << "vacio"<<endl;
        return;
    }
    for(int& item: vec){
        cout << item << " ";
    }
    cout << "\n";
}

vector<int> subsets;
void search_v1(int k){
    if(k == n+1){
        print(subsets);
    }else{
        subsets.push_back(k);
        search_v1(k+1);
        subsets.pop_back();
        search_v1(k+1);
    }
}

void search(){
    if(permutations.size() == n){
        printb(chosen,n+1);
        print(permutations);
    }else{
        for(int i=1; i <= n; ++i){
            
            if(chosen[i]) continue;
            printb(chosen,n+1);
            cout << "*****************"<<endl;
            chosen[i] = true;
            permutations.push_back(i);
            search();
            chosen[i] = false;
            permutations.pop_back();
        }
    }
}
#include <algorithm>
void nextPermutationinCPP(){
    vector<int> vect = {2,3,1,4};
    std::sort(vect.begin(),vect.end());
    int i = 1;
    do{
        cout << i << "  "; 
        print(vect);
        ++i;
    }while(std::next_permutation(vect.begin(),vect.end()));
}


int main(){
    nextPermutationinCPP();
}