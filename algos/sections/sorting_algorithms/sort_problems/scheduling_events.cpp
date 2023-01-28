#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int,int>& a, pair<int,int>& b){
    return a.second < b.second;
}

bool isOver(pair<int,int>&a , pair<int,int>& b){
    return a.first < b.first & b.first < a.second;
}
void print(const vector<pair<int,int>>& arr){
    for(pair<int,int> item: arr){
        cout << "["<<item.first<<", "<<item.second<<"] ";
    }
    cout << endl;
}

void scheduling(vector<pair<int,int>>& events){
    sort(events.begin(), events.end(),compare);
    int counter = 1;
    pair<int,int> fixed_event = events[0];
    vector<pair<int,int>> solution;
    solution.push_back(events[0]);
    for(int i = 1; i < events.size(); ++i){
        if(isOver(fixed_event, events[i])){
            continue;
        }else{
            fixed_event = events[i];
            solution.push_back(fixed_event);
            counter++;
        }

    }
    print(solution);
    cout << "Max number of events is: "<< counter << endl;
    cout << "***********************************************\n";
}

void second_solution(vector<pair<int,int>>& events){
    sort(events.begin(), events.end(),compare);
    // print(events);
    vector<pair<int,int>> solution;
    solution.push_back(events[0]);
    for(int i = 1; i < events.size(); ++i){
        if(events[i].first >= solution[solution.size()-1].second){
            solution.push_back(events[i]);
        }
    }
    print(solution);
}

int main(){
    vector<pair<int,int>> events;
    events.push_back({5,9});
    events.push_back({1,2});
    events.push_back({3,4});
    events.push_back({0,6});
    events.push_back({5,7});
    events.push_back({8,9});
    
    // events.push_back({1,6});
    // events.push_back({2,3});
    // events.push_back({4,5});
    scheduling(events);
    second_solution(events);
}