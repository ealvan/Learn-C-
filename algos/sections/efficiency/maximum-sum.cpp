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
                if(k==i){
                    printf("Init -> k=%d - j=%d\n",k,j);
                }
                if(k == j){
                    printf("End -> k=%d - j=%d\n",k,j);
                }
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

int main(){
    int array[N] = {-1,2,4,-3, 5, 2, -5, 2};
    brute_force(array);
    brute_force_v2(array);
    best_solution(array);
}