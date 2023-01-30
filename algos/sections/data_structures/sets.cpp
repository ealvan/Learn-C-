#include <bits/stdc++.h>
using namespace std;

template<typename Iter>
void print(Iter ms){
    cout <<"*******INFO of set: \n";
    cout << "#items: "<< ms.size()<<endl;
    cout << "Smallest element: "<< *ms.begin() << endl;
    auto f = ms.end();
    --f;
    cout << "Largest element: "<< *f << endl;
    
    for(auto item: ms){
        cout << item << " ";
    }
    cout << endl;
}

void set_operations(){
    set<int> ms;
    int n = 5;
    int elem = 12;
    ms.insert(elem);
    for(int i = 0; i< n; ++i){
        int item = rand()%23;
        ms.insert(item);
        cout << item << " ";
    }
    cout << endl;
    int r = rand()%23;
    cout << "element: "<<elem << " is in set: "<<boolalpha<<ms.count(elem)<<endl;
    cout << "element: "<<(r) << " is in set: "<<boolalpha<<ms.count(r)<<endl;
    ms.erase(elem);
    ms.insert(r);
    cout << "****************************************\n";
    cout << "element: "<<elem << " is in set: "<<boolalpha<<ms.count(elem)<<endl;
    cout << "element: "<<(r) << " is in set: "<<boolalpha<<ms.count(r)<<endl;
    print(ms);
    auto f1 = ms.end();
    f1--;
    int x = (*f1)/2;
    cout << "Element to see upper and lower bound:  "<<x<<endl;
    cout << "Upper bound: "<<*ms.upper_bound(x)<<endl;//LARGE THAN X
    cout << "Lower bound: "<<*ms.lower_bound(x)<<endl;//AT LEAST X
    
}

int main(){
    srand(time(0));
    set_operations();
}