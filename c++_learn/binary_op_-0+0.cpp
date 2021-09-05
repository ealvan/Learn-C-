#include <iostream>
#include <sstream>
using namespace std;
class Date{
    private:
        int day,month,year;
        string format;
    public:
        Date(int d, int m, int y)
        :day(d),month(m), year(y){}

        void operator+=(int days){
            day +=days;
        }
        void operator -=(int days){
            day -= days;
        }
        operator const char*(){
            stringstream out;
            out << year<<"/"<< month << "/"<< day<<endl;
            format = out.str();
            return format.c_str();
        }

};
int main(){
    Date holiday(12,12,2021);
    cout << holiday;
    holiday-=11;
    cout << holiday;
    holiday+=13;
    cout << holiday;
}