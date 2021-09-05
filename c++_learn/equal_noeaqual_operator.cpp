#include <iostream>
#include <sstream>
using namespace std;
class Date{
    private:
        int day,month,year;
        string format;
    public:
        Date(int y,int m, int d)
        :year(y),month(m),day(d){}

        void operator -=(int days){
            day -= days;
        }
        void operator += (int days){
            day+=days;
        }

        bool operator ==(const Date& date){
            bool equal = ((day==date.day) && 
                        (month == date.month) && 
                        (year == date.year));
            return equal;
        }
        bool operator != (const Date& date){
            return !(this->operator==(date));
        }
        operator const char*(){
            stringstream out;
            out << year<<" / " << month <<" / "<< day << endl;
            format = out.str();
            return format.c_str();
        }
};
int main(){
    Date holiday(2021, 12,12);
    Date h2(2021,12,13);
    bool equal = holiday != h2;//true
    h2-=1;
    bool no_equal = holiday == h2;//true
    cout << equal << endl;
    cout << no_equal << endl;
}