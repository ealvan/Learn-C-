#include <bits/stdc++.h>
using namespace std;
//range operator print example
void print(vector<int> myvector,string about=""){
    if(about != "")
        cout <<"*************_" <<about<<"_*************"<< endl;
    ;
    for(auto iterator = myvector.begin(); iterator != myvector.end(); iterator++){
        cout << *iterator << " ";
    }
    cout << endl;
}
vector<int> randomVector(int seed, int size){
    srand(seed);
    vector<int> list(size);//Number of item: "size", with all elements to 0;
    for(int i = 0; i < size; i++){
        list[i] = rand()%100;
    }
    return list;
}
void ranges(){
    vector<int> example(8,rand()%100);
    print(example,"List with the same random element");//gives the same element value for each position in example.
    vector<int> list = randomVector(time(0),12);
    print(list,"Randomlist");
    sort(list.begin(), list.end());
    print(list,"Random list sorted");
    reverse(list.begin(),list.end());
    print(list,"random list in reverse order");
    random_shuffle(list.begin(),list.end());
    print(list,"Shuffled all items");
    //Using lower bound and upper bound
    /*
    ONLY WORKS when is already sorted, both use binary_search
        Lower bound: gives the most near element <= x;(very very close as possible AT LEAST X);
        Upper bound: gives the most near element > x;(very very close as possible LARGER THAN X);
    */
    vector<int> list2 = {1,2,3,4,5,6,7,8,9,10,11};
    print(list2,"Testing \"lower_bound()\" & \"upper_bound()\"");
    double m=4,n=4;
    auto a = lower_bound(list2.begin(), list2.end(), m); //  5 <-
    auto b = upper_bound(list2.begin(),list2.end(), n); //  -> 10
    cout << "Lower bound of "<<m<<" is: "<< *a<<endl;
    cout << "Upper bound of "<<n<<" is: "<< *b<<endl;
    cout << "If a element doesn't exist GIVES a elemet greather than list.end() iterator \n";
    auto c = lower_bound(list2.begin(),list2.end(),12);
    cout << "iterator > list.end() = "<<boolalpha << (c > list.end())<<endl;
    vector <int > uniq = {1,2,3,3,5,5,7};
    print(uniq,"Normal list with no unique items");
    vector<int>::iterator iter = unique(uniq.begin(),uniq.end());
    cout << "Last NOT removed element: "<< *iter << endl;
    uniq.resize(distance(uniq.begin(), iter));
    print(uniq,"List only with unique items");
    uniq.erase(unique(uniq.begin(),uniq.end()),uniq.end());
    print(uniq,"Erase no unique items from the list");
}
int main(){
    srand(time(0));
    ranges();
}