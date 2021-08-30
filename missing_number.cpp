#include <string>
#include <cstring>
#include <iostream>
#include <cmath>
#include <vector>
#include <bits/stdc++.h>

using std::cout;
using std::string;
using std::vector;
using std::cin;

void getMissinNumber(vector<int>&data, int n){
    
    for(int i = 1; i <= n; i++){
        if(!(i == data[i-1])){
            cout << i;
            break;
        }
    }
}

void getNumbersInput(string &second_input, int n){
    vector<int> data;
    char nums[second_input.length()];
    strcpy(nums, second_input.c_str());
    char* token = strtok(nums, " ");
    bool first = true;
    while(token != NULL){
        data.push_back(atoi(token));
        token = strtok(NULL, " ");
        first = false;
    }
    if(!first){
        sort(data.begin(), data.end());
        getMissinNumber(data, n);
    }else{
        int item = atoi(nums);
        data.push_back(item);
        sort(data.begin(), data.end());
        getMissinNumber(data, n);
    }
}

int main(){

    //first
    char first[100];
    cin.getline(first, 100);
    int first_input = atoi(first);

    //second
    string secqi;
    getline(cin, secqi);
    getNumbersInput(secqi, first_input);   

}