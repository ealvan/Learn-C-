#include <iostream>
#include <sstream> // for ostringstream for using my output string
using namespace std;
class Date{
    private:
        int anio, month, day;
        string format;
    public:
        Date(int a,int m, int d):
        anio(a),month(m),day(d){ }
        // postfix differs from prefix operator in return-type and parameters
        //PREFIX
        Date& operator ++(){
            this->day++;
            return *this;
        }
        Date& operator--(){
            this->day--;
            return *this;
        }
        //POSTFIX
        Date operator ++(int){
            Date copy(anio, month, day);
            copy.day++;
            return copy;
        }
        Date operator--(int){
            Date copy(anio, month, day);
            copy.day--;
            return copy;
        }
        /*
        As the implementation of the postfix operators demonstrates, a
        copy containing the existing state of the object is created before
        the increment or decrement operation to be returned thereafter.
        In other words, if you had the choice between using ++ object;
        and object ++; to essentially only increment, you should
        choose the former to avoid the creation of a temporary copy that
        will not be used.
        */
        void printDate(){
            cout << "Date : "<< anio<<" / "<< month << " / "<< day << endl;
        }
        //evolution of printData
        //The stringstream, ostringstream, and istringstream 
        //objects are used for input and output to a string.
        /*explicit*/
        operator const char*(){
            ostringstream ostring;
            ostring << "Date : "<< anio<<" / "<< month << " / "<< day << endl;
            format = ostring.str();
            return format.c_str();
        }
        //other common use for operator
        /*
        explicit operator int()
        {
            return day + month + year;
        }
        int holiday = static_cast<int>(holidayObj);
        */
};

int main(){
    Date holiday(2021,7,25);
    cout << "Original:"<<endl;
    cout << holiday;
    cout << "Plus:"<<endl;
    ++holiday;
    cout << holiday;
    cout << "Minus:"<<endl;
    --holiday;
    cout << holiday;
    Date tmp = holiday++;
    tmp.printDate();
    tmp = holiday--;
    tmp.printDate();
    //IMPLICIT CAST
    string str(tmp);//implicit conversion because there is operator const char*(){}
    cout <<"str: "<< str << endl;
    str = Date(11, 11, 2016); //implicit conversion because there is operator const char*(){}
    cout <<"str: " << str << endl;
    /*
    EXPLICIT CAST
        string strHoliday(static_cast<const char*>(Holiday));
        strHoliday=static_cast<const char*>(Date(11,11,2016));
    */
}

