#include <iostream>
#include <string>
#include <bits/stdc++.h>
using std::cout;
using std::string;
using std::cin;
using std::max;
using std::string;

void increasing_array(int arr[], int n){
    int lis[n], len = 0;
    for(int i =0; i < n; i++){
        lis[i] = 1;
    }
    for(int i = 1; i < len; i++){
        for(int j = 0; j < i;j++){
            if(arr[j] < arr[i] && (i-j) <= (arr[i] - arr[j]) ){
                lis[i] = max(lis[i], lis[j] + 1);
            }
        }
        len = max(len, lis[i]);
    }
    cout << n-len;
}

int main(){
    char n_[100];
    cin.getline(n_, 100);
    int n = atoi(n_);

    string data;
    getline(cin, data);
    char dat[data.length()];
    int mydat[n];
    strcpy(dat, data.c_str());
    char* token = strtok(dat, " ");
    int i =0;
    while(token != NULL){
        mydat[i] = atoi(token);
        token = strtok(NULL, " ");
        i++;
    }
    increasing_array(mydat, sizeof(mydat)/sizeof(mydat[0]));

}