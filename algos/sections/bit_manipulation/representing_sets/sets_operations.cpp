#include <bits/stdc++.h>
using namespace std;
#define N 4
int creating_set(int numbers[N]){
    int x = 0;
    for(int i = 0; i < N; i++){
        x = x | (1 << numbers[i]);
    }
    return x;
}
void printSet(int x){
    for(int i = 0; i < 32; i++){
        if(x&(1<<i)) cout << i<<" ";
    }
    cout << "\n*******************"<<endl;
}

int UNION_operation(int a , int b){
    return a | b;
}
int INTERSECTION_operation(int a, int b){
    return a & b;
}

int COMPLEMENT_operation(int a){
    return ~a;
}
int DIFERENCE_operation(int a, int b){
    return a & ~b;
}
void printSetinFor(int n,int k){
    cout << "b=0; b < (1<<n); -> [0, ...., 2^n-1]\n";
    // it goes throught a set of [0,1,2,3,4,...., n-1]
    for(int b = 0; b < (1 << n); b++){
        printf("%X ",b);
    }
    cout << "\n******************************\n";
    cout << "b=0; b < (1<<n); -> [0, ...., 2^n-1] -> if #1's == k \n";
    for(int b = 0; b < (1 << n); b++){
        if(__builtin_popcount(b) == k){
            printf("%X ", b);
        }
    }
    int x = (1 << 1) | (1 << 2) | (1 << 3);
    cout << "\n******************************\n";
    int b = 0;
    do{
        printf("%X \n", b);
        // cout << b << endl;        
    }while(b=(b-x)&x);
}
int main(){
    int nums[N] = {12,11,4,7};
    int set1 = creating_set(nums);
    nums[0] = 9;nums[1] = 2; nums[2]=5;
    int set2 = creating_set(nums);
    cout << "SET1 :\n";
    printSet(set1);
    cout << "SET2 :\n";
    printSet(set2);
    cout << "SET1 UNION SET2 :\n";
    printSet(UNION_operation(set1,set2));
    cout << "SET1 INTERSECTION SET2 :\n";
    printSet(INTERSECTION_operation(set1,set2));
    cout << "COMPLEMENT of SET1 :\n";
    printSet(COMPLEMENT_operation(set1));
    cout << "DIFFERENCE of SET1 :\n";
    printSet(DIFERENCE_operation(set1,set2));
    printSetinFor(4,3);
}