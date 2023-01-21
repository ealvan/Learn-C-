#include <bits/stdc++.h>
using namespace std;
#define N 8
void brute_force(int array[N]){
    int best = 0;
    for(int i = 0; i < N; i++){
        for(int j = i; j < N; j++){
            // if(j==i){
            //     printf("Init -> i=%d - j=%d\n",i,j);
            // }
            // if(j == N-1){
            //     printf("End -> i=%d - j=%d\n",i,j);
            // }
            int sum = 0;
            for(int k = i; k <= j; k++){
                // if(k==i){
                //     printf("Init -> k=%d - j=%d\n",k,j);
                // }
                // if(k == j){
                //     printf("End -> k=%d - j=%d\n",k,j);
                // }
                sum += array[k];
            }
            best = max(best, sum);
        }
    }
    cout << "Brute Force:\nLa maximum-summ subarray of this array is: "<< best << endl;
}

void brute_force_v2(int array[N]){
    int best = 0,sum;
    for(int i = 0; i < N; i++){
        sum = 0;
        for(int j = i; j < N; j++){
            // if(j==i){
            //     printf("Init -> i=%d - j=%d\n",i,j);
            // }
            // if(j == N-1){
            //     printf("End -> i=%d - j=%d\n",i,j);
            // }
            sum += array[j];
            best = max(best,sum);
        }
    }
    cout << "Brute Force V2:\nLa maximum-summ subarray of this array is: "<< best << endl;
}

void best_solution(int array[N]){
    int best= 0, sum = 0;
    for(int i = 0; i < N; i++){
        sum = max(array[i],sum+array[i]);
        best = max(best,sum);
    }
    cout << "BEST solution:\nLa maximum-summ subarray of this array is: "<< best << endl;
}

void best_solution_v2(int a[N]){
    int max = a[0];
    int cur = a[0];
    int z = N;//sizeof(a)/sizeof(a[0]);

    if (! N >  1) return;
    for (int ii = 1; ii < N; ++ii) {
        if (cur >> 31) cur = a[ii];
        else cur += a[ii];
        max = std::max(cur, max);
    }
    cout << "BEST solution V2:\nLa maximum-summ subarray of this array is: "<< max << endl;
}
void best_solution_v3(int a[N]){
    int global_max = INT_MIN;
    int local_max = 0;
    for(int i = 0; i < N; ++i){
        local_max =  max(a[i], local_max+a[i]);
        if(local_max > global_max){
            global_max = local_max;
        }
    }
    cout << "BEST_SOLUTION_V3:\nThe maximu-subarray is: "<< global_max << endl;
}

void rest(int a, int b){
    if((a-b) >= (a+b)){
        cout << "It's overflow\n";
    }else{
        cout << "It's NOT overflow\n";
    }
}

void sum(int a, int b){
    if((a+b) <= -(a+b)){
        cout << "It's overflow\n";
    }else{
        cout << "It's NOT overflow\n";
    }    
}
// INT_MAX+1 = INT_MIN
void test(){
    int a = INT_MAX;
    int b = 2;
    rest(a,b);
    // cout << (a-b) << endl;
    // cout << (a+b) << endl;
    
    // if((a-b) >= (a+b)){
    //     cout << "It's overflow\n";
    // }else{
    //     cout << "It's NOT overflow\n";
    // }
    // if(a >= 0 & b>= 0 & (a+b) <= -(a+b)){
    //     cout << "It's overflow\n";
    // }else{
    //     cout << "It's NOT overflow\n";
    // }
    // int n = 3;
    // if(~n == -n-1){
    //     cout << "It's overflow\n";
    // }else{
    //     cout << "It's NOT overflow\n";
    // }
    // int mmax = INT_MAX;
    // int overflow = mmax+1;
    // cout << overflow << endl;
    // int mmin = INT_MIN;
    // bitset<32> number{INT_MAX};
    // cout << number << endl;
    // bitset<32> number1{overflow};
    // cout << number1 << endl;
    // bitset<32> number2{~mmax};
    // cout << number2 << endl;
    // // bitset<32> number3{INT_MIN};
    // // cout << number3 << endl;
    // bitset<32> number4{mmin};
    // cout << number4 << endl;
}
int main(){
    int array[N] = { -5, 3, INT_MAX, 2, 1};
    brute_force(array);
    brute_force_v2(array);
    best_solution(array);
    best_solution_v2(array);
    best_solution_v3(array);
    test();
}