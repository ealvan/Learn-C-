//https://leetcode.com/problems/add-two-numbers/
#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

struct ListNode;
struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
/**
 * Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 */
class Solution {
public:
    void accumulate(ListNode* l1,vector<int>& data){        
        while(l1->next != nullptr){
            data.push_back(l1->val);
        }   
    }
    vector<int> addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        vector<int> l1_arr;
        vector<int> l2_arr;
        
        accumulate(l1,l1_arr);
        accumulate(l2,l2_arr);
        
        vector<int>::reverse_iterator l1i = l1_arr.rbegin();
        vector<int>::reverse_iterator l2i = l2_arr.rbegin();
        
        vector<int> result;
        int sizeMax = l1_arr.size() > l2_arr.size() ?  l1_arr.size() : l2_arr.size();

        result.reserve(sizeMax);
        int col;
        while(l1i != l1_arr.rend() && l2i != l2_arr.rend()){
            col = *l1i + *l2i + carry;
            result.push_back(col);
            carry = col % 9;
            ++l1i;
            ++l2i;
        }
        while(l1i != l1_arr.rend()){
            col = *l1i + carry;
            result.push_back(col);
            
            ++l1i;
        }
        while(l2i != l2_arr.rend()){
            col = *l2i + carry;
            result.push_back(col);
            ++l2i;
        }
        return result;
    }
};

void print(vector<int>& arr){
    for(int i=0; i < arr.size(); ++i){
        cout << arr[i] <<" - ";
    }
    cout << endl;
}


int main(){

    int arr1[] = {2,4,3};
    int arr2[] = {5,6,4};
    ListNode* l1;
    ListNode* ptr = l1;
    ListNode* l2;
    for(int i: arr1){
        ptr->val=i;
        ptr = l1->next;
    }
    ptr = l2;  
    for(int i: arr2){
        ptr->val=i;
        ptr = l1->next;
    }  
    Solution sol;
    vector<int> data = sol.addTwoNumbers(l1,l2);

    print(data);

}