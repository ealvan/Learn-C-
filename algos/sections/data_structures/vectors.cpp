#include <bits/stdc++.h>
using namespace std;

template<typename Iter>
void print(Iter list){
    for(auto item: list){
        cout << item << " ";
    }
    cout << endl;
}

void useful_vector_methods(){
    vector<int> list;
    //push_back -> Goes to the end of the vector
    list.push_back(rand()%100);// [2]
    list.push_back(rand()%10);// [2,5]
    list.push_back(rand()%100);// [2,5,3]
    list.push_back(rand()%100);
    list.push_back(rand()%100);
    list.push_back(rand()%100);
    
    print(list);
    cout << "****************************\n";
    vector<int> list1 = {1,2,3,4,5};
    vector<int> list2(8,2);//8 items with value "2"
    print(list2);
    cout << "****************************\n";
    for(auto& item : list){
        print(list);
        cout << "Lat element: "<<list.back()<<endl;;
        list.pop_back(); //deletes the last element
    }
}

int main(){
    srand(time(0));
    useful_vector_methods();
}