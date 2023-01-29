#include <bits/stdc++.h>
using namespace std;
//Given a deadline "d" for each task and a durations of all tasks "x"
//You need to improve your score "d-x"."d-x" is the score of each task.
//You need to maximize it.

bool compare(tuple<char,int,int>& a, tuple<char,int,int>& b){
    return get<1>(a) < get<1>(b); 
}

void maximize_score(vector<tuple<char,int,int>>& tasks){
    sort(tasks.begin(), tasks.end(), compare);
    int total_score = 0;
    int moment = 0;
    for(int i = 0; i < tasks.size(); ++i){
        moment += get<1>(tasks[i]);
        total_score += (-moment + get<2>(tasks[i]));       
    }
    cout << endl;
    cout << "Total maximum score is: "<< total_score << endl;    
}
int main(){
    vector<tuple<char,int,int>> tasks;
    // task_name - duration - deadline
    tasks.push_back({'A',4,2});
    tasks.push_back({'B',3,10});
    tasks.push_back({'C',2,8});
    tasks.push_back({'D',4,15});
    maximize_score(tasks);
}