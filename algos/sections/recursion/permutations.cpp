#include <bits/stdc++.h>
using namespace std;
const int n = 3;
// vector<int> permutation;

list<int> current_permutation;
// bool chosen[n+1];
void print(){
    for(int item: current_permutation)
    {
        cout << item << " ";
    }
    cout << endl;
}
void search()
{
    if(current_permutation.size() == n)
    {
        print();
    }
    else
    {
        for(int i = 1; i <= n; i++)
        {
            if(find(current_permutation.begin(),current_permutation.end(),i) != current_permutation.end())
            {
                continue;
            }
            current_permutation.push_back(i);
            // print();
            search();
            current_permutation.pop_back();
            // print();
        }
        // cout << "**********"<<endl;
    }
}

int main(){
    freopen("output_office.txt","w",stdout);
    search();
}