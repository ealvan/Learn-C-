#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Date{
    private:
        int day,month, year;
        string format;
    public:
        Date(int y, int m, int d)
        :year(y),month(m),day(d){        }
        
        Date operator +(int days){
            return Date(year,month, day+days );
        }
        
        Date operator -(int days){
            return Date(year, month, day-days);
        }
        
        void display(){
            cout << day << " / "<< month <<  " / " << year <<endl;
        }
        
        operator const char*(){
            stringstream output;
            output << day << " / "<< month <<  " / " << year<<"\n";
            format = output.str();
            return format.c_str();
        }
};


int main(){
    Date holiday(2021,12,12);
    cout << holiday;
    Date yesterday(holiday -11);
    cout << yesterday;
    Date tomorrow(holiday + 11);
    cout << tomorrow;
}
