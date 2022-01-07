//https://leetcode.com/problems/two-sum/
#include <tuple>
#include <vector>
using std::tuple;
using std::make_tuple;
using std::vector;

#include <vector>
using std::vector;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> indxs;
        indxs.reserve(2);
        for(int i = 0; i < nums.size();++i){
            int staticPoint = nums[i];
            int movePoint;
            for(int j = i+1; j < nums.size(); ++j){
                movePoint = nums[j];
                if(staticPoint+movePoint == target){
                    indxs.push_back(i);
                    indxs.push_back(j);
                    return indxs;
                }
            }
        }
        indxs[0] = -1;
        indxs[1] = -1;
        
        return indxs;
    }

    
};
#include <iostream>
using std::cout;
using std::endl;

int main(){
    int ia,ib;

    vector<int> arr = {3,2,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    Solution sol;
    vector<int> tupla = sol.twoSum(arr,6);
    cout << "indexs: "<< tupla[0] <<" "<<tupla[1]<< endl;


}