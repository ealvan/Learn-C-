#include <bits/stdc++.h>
using namespace std;

template<typename Iterator>
void print(Iterator list){
    for(auto item: list){
        // if(typeof(list) == "Point"){
        //     cout << item.toStr() << " ";
        // }else{
        cout << item << " ";
        // }
    }
    cout << endl;
}

struct Point{
    int x,y;
    Point(int x, int y): x(x),y(y){}
    //use this with: sort(v.begin(), v.end()) 
    bool operator<(const Point& p) const{
        if(x == p.x) return y < p.y;
        else return x < p.x;
    }
    //use this with: sort(v.begin(),v.end(), greather<StructName>())
    bool operator>(const Point& p) const{
        if(x == p.x) return y > p.y;
        else return x > p.x;
    }
    string toStr(){
        return "["+to_string(x)+", "+to_string(y)+"]";
    }
};

void print(vector<Point>& arr){
    for(int i = 0; i < arr.size() ; ++i){
        cout << arr[i].toStr() << " ";
    }
    cout << endl;
}

template<const int N>
void print(int arr[N]){
    for(int i = 0; i < N; ++i){
        cout << arr[i]<< " ";
    }
    cout << endl;
}

void print(vector<pair<int,int>> &vc){
    for(pair<int,int> item: vc){
        cout << "{"<<item.first<<"," << item.second<<"} ";
    }
    cout << endl;
}
void print(vector<tuple<int,int,int>> &vc){
    for(tuple<int,int,int> item: vc){
        cout << "{"<<get<0>(item)<<", " << get<1>(item)<<", "<<get<2>(item)<<"} ";
    }
    cout << endl;
}
int main(){
    //first
    vector<int> v{1,5,2,6,-1,20};
    sort(v.begin(),v.end());
    print(v);
    //second
    const int n = 4;
    int arr[n]{12,-34,0x10,1};
    sort(arr,arr+n);
    print<n>(arr);
    //third: in reverse order
    vector<int> v1{12,4,12,54,34,0b1010, 0xa0};
    sort(v1.rbegin(),v1.rend());
    print(v1);
    //fourth: Comparison Operators
    vector<pair<int,int>> v2;
    v2.push_back({1,2});
    v2.push_back({3,-1});
    v2.push_back({1,3});
    sort(v2.begin(),v2.end());
    print(v2);
    cout << "............................."<<endl;
    vector<tuple<int,int,int>> v3;
    v3.push_back({1,2,3});
    v3.push_back({2,2,1});
    v3.push_back({2,2,-1});
    v3.push_back({3,2,1});
    sort(v3.begin(), v3.end());
    print(v3);
    cout << "............................."<<endl;
    //Fifth: Do you own compare operator<
    // struct Point{
    //     int x,y;
    //     Point(int x, int y): x(x),y(y){}
    //     bool operator<(const Point& p){
    //         if(x == p.x) return y < p.y;
    //         else return x < p.x;
    //     }
    //     string toStr(){
    //         return "["+to_string(x)+", "+to_string(y)+"]";
    //     }
    // };
    // cout << boolalpha << (Point(3,2) < Point(3,-1)) << endl;
    vector<Point> v4;
    v4.push_back(Point(1,2));
    v4.push_back(Point(2,2));
    v4.push_back(Point(2,1));
    v4.push_back(Point(3,-1));
    sort(v4.begin(), v4.end());
    print(v4);
    sort(v4.begin(), v4.end(), greater<Point>());
    print(v4);
}