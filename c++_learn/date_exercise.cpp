#include <iostream>
#include <sstream> // for ostringstream for using my output string
using namespace std;
class Date{
    private:
        int anio, month, day;
        string format;
        friend int date_to_int(Date& date);
    public:
        Date(int a,int m, int d):
        anio(a),month(m),day(d){ }
        explicit operator int()
        {
            return anio*365+month*30 + day;
        }
};
int date_to_int(Date& date){
    return date.anio*365+date.month*30 + date.day;
}
int main(){
    Date d1(2021,12,23);
    int a = date_to_int(d1);
    int b = (int)d1;
    int c = static_cast<int>(d1);
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    
}