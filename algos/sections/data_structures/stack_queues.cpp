#include <bits/stdc++.h>
using namespace std;

template<typename Iter>
void print(Iter list){
    for(auto& item: list){
        cout << item << " ";
    }
    cout << endl;
}

void deque_operations(){
    cout << "DEQUE operations **********************************"<<endl;
    //DOUBLE ENDED QUEUE - deque
    //array which can be controled in starts and ends.
    deque<int> d;
    int n = 4;
    for(int i = 0; i < n; ++i){
        d.push_back(rand()%100);
        print(d);
    }
    cout << "*******************\n";
    for(int i = 0; i < n/2; ++i){
        print(d);
        d.pop_back();//deletes the last element
        d.pop_front();//deletes the first element
    }
    //O(1) time for each delete and insertion(front or back)
    /*
        PUSH_BACK - POP_BACK
        PUSH_FRONT - POP_FRONT
    */
}
//the last will be the first
void stack_operations(){
    cout << "STACK operations **********************************"<<endl;
    stack<int> my_stack;
    int n = 5;
    for(int i = 0; i < n; ++i){
        int ram = rand()%45;
        my_stack.push(ram);
        cout << ram << " ";
    }
    cout << "- Top: "<<my_stack.top()<<endl;
    //print stack...
    cout << "Top: "<<my_stack.top()<<" - \n";
    do{ 
        int item = my_stack.top();
        cout << item << " ";            
        my_stack.pop();
    }while(!my_stack.empty());
    cout << endl;
    //PUSH-TOP-POP
}

void queue_operations(){
    cout << "QUEUE operations **********************************"<<endl;
    queue<int> mq;
    int n = 5;
    for(int i = 0; i < n; ++i){
        int ram = rand()%23;
        mq.push(ram);
        cout << ram << " ";
    }
    cout << endl;
    do{
        cout << "Top: "<< mq.front() << endl;
        cout << "Back: "<<mq.back() << endl;
        mq.pop();
    }while(!mq.empty());
    /*
    PUSH
    FRONT - BACK
    POP
    */ 

}

int main(){
    srand(time(0));
    deque_operations();
    stack_operations();
    queue_operations();
}