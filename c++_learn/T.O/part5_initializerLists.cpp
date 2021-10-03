#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::string;
using std::initializer_list;
using std::vector;
class A{
    private:
        vector<int> data;
    public:
        A(initializer_list<int> list){
            for(auto &item: list){
                data.push_back(item);
            }
        }
        void display(){
            for(auto &item: data){
                cout << item << endl;
            }
        }
};
int main(){
    A a={1,2,3,4,5,6};//forma 1
    A b{54,3,3,2,21,1};//forma 2, el autor dice que es opcional
    a.display();
}