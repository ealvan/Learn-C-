#include <iostream>
#include <string>
using namespace std;
int main(){
    string food[6] = {"pizza","burger"};
    food[2] = "popcorn";
    cout << "1 and 2 item: "<< food[1]<<"--"<<food[2]<<endl;
    cout << "Choose a number between 3 to 5:"<<endl;
    int n;
    cin >> n;
    cout << "Enter item"<< endl;
    string item;
    cin.ignore();
    //skip this line
    getline(cin, item);
    food[n] = item;
    cout << "food["<<n<<"] = "<< food[n]<<endl;
}