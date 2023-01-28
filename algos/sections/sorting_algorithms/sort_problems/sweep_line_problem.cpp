#include <bits/stdc++.h>
using namespace std;
#define N 3 //#customers
struct Event{
    int value;
    bool isArrival;
    Event(){};
    Event(int val,bool isArrival): value(val),isArrival(isArrival){}
    bool operator<(const Event& p){
        return value < p.value;
    }
    string toStr(){
        return "["+to_string(value)+", "+(isArrival?"true":"false")+"]";
    }
};

template<typename Iter>
void print(Iter list){
    for(auto item: list){
        cout << item.toStr() << " ";
    }
    cout << endl;
}

//There is  a restaurant with customers.
//We know the arrival and leaving times for all customers.
//find the maximum client at the same time in the restaurant
void sweep_line_restaurant(int arrival[N], int leaving[N]){
    array<Event, 2*N> events;
    for(int i = 0; i < 2*N; i++){
        if(i < N) 
            events[i] = Event(arrival[i],true);
        else
            events[i] = Event(leaving[i-N], false);
    }
    print(events);
    sort(events.begin(), events.end());
    print(events);
    int cur_customers = 0;
    int max_customer = 0;
    for(int i = 0; i< 2*N; ++i){
        cur_customers += events[i].isArrival ? 1 : -1;
        max_customer = max(cur_customers,max_customer);
    }
    cout << "(Sweep algorithm)Max customers: " << max_customer << endl;
    // return max_customer;
}

void another_solution(int arrival[N], int leaving[N]){
    int arrive = INT_MIN;
    int leave = INT_MIN;
    int counter = 0;
    for(int i = 0; i < N; ++i){
        if(arrival[i] > arrive || leaving[i] > leave){
            counter++;
            if(arrival[i] > arrive) arrive = arrival[i];
            if(leaving[i] > leave) leave = leaving[i];
        }
    }
    cout << "(Another solution)Max customers: " << counter << endl;
}

int main(){
    int arrival[N] = {5,2,3};//{6,1,2,5};//
    int leaving[N] = {8,4,9};//{8,3,4,7};//;
    sweep_line_restaurant(arrival,leaving);
    another_solution(arrival,leaving);
}
