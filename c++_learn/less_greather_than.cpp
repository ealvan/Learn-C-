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
        bool operator <(const Date& date){
            int time = date.day+30*date.month+12*30*date.year;
            int ttime = day+30*month+12*30*year;
            return ttime < time;
        }
        bool operator <= ( const Date& date){
            if(this->operator==(date) || this->operator<(date)){
                return true;
            }
            return false;
        }
        bool operator >(const Date& date){
            return !( this->operator==(date) || this->operator<(date) );
            // false        
        }
        bool operator >=(const Date& date){
            return ( this->operator>(date) || (this->operator==(date)) );
        }
        bool operator ==(const Date& date){
            bool is = ((date.year == year)&&
                (date.month == month) && 
                (date.day == day));
            return is;
        }
        bool operator !=(const Date& date){
            bool is = !(this->operator==(date));
            return is;
        }
        
};
int main(){
    Date h1(2021,12,1);
    Date h2(2021,4,12);
    Date h3(2021, 12, 1);

    bool uno = h1 == h2;//false
    bool dos = h1 == h3;//true
    bool tres = h2 != h3;//true

    bool fff = h3 < h2; //"false"
    bool cuatro = h3 > h2;//"true"...
    
    bool cinco = h3 >= h1;//true
    bool seis = h2 <= h1;//true

    cout << 
    uno << endl << 
    dos << endl << 
    tres << endl <<"\n"<< 
    fff << endl << 
    cuatro << endl << "\n"<<
    cinco << endl << 
    seis << endl;
}