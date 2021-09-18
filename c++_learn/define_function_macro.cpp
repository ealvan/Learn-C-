#include <iostream>
#include <string>
using namespace std;

#define SQUARE(x) ((x)*(x))
#define PI 3.1416
#define AREA_CIRCLE(x) (PI*(x)*(x))
#define MIN(x,y) ( ( (x) > (y) )  ? (y) : (x) )
#define MAX(x,y) ( ( (x) > (y) )  ? (x) : (y) )

int main(){
    int sq = SQUARE(12);
    int area = AREA_CIRCLE(PI);
    int min = MIN(12,13);
    int max = MAX(14,12);
    cout << "Square: "<<sq <<endl
        << "Area Circle: "<< area << endl
        << "Min "<< min << endl
        << "Max " << max << endl;
    
}