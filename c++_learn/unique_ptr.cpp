#include <iostream>
#include <memory>
#include <string>
using namespace std;
class Date{
    private:
        int day, month, year;
        string format;
    public:
        Date(int d,int m,int y)
            :day(d),month(m),year(y){}
        void display(){
            cout << day << " / "<< month <<  " / " << year <<endl;
        }
};

int main(){
    unique_ptr<int> smart_ptr(new int);
    *smart_ptr = 12;
    unique_ptr<Date> smart_date(new Date(12,6,2021));
    cout << *smart_ptr << endl;
    smart_date->display();
}