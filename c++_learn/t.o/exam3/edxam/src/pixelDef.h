#include <iostream>
#include <sstream>
#include <stdlib.h>
#include <time.h>
using std::cout;
using std::endl;

enum Format{
    RGB=3,
    CMYK = 4
};
int randomNumber(int min, int max){
   return min + rand() / (RAND_MAX / (max - min + 1) + 1);
}

template<typename T=int,const int format=Format::RGB>
class Pixel{
public:
    T vals[format];//RGB3,CMYK4
    Pixel(){
        for(int i = 0; i < format; ++i){
            vals[i] = T{};
        }
    }
    const T& getIndex(int index){
        if(index >= 0 && index <= (format-1)){
            return vals[index];
        }
        return vals[0]; 
    }
    void setByIndex(int index,const T& value){
        if(index >= 0 && index <= (format-1)){
            switch(format){
                case Format::RGB:
                    if(value >= 0 && value <= 255){
                        vals[index] = value;
                    }
                break;
                case Format::CMYK:
                    if(value >= 0 && value <= 100){
                        vals[index] = value;
                    }
                break;
                default:
                    cout << "ERROR"<<endl;
            }   
        }
    }
    T& operator[](unsigned index){
        return vals[index];
    }
    Pixel<T,format> operator+(Pixel<T,format> other){
        Pixel<T,format> nuevo;
        for(int i = 0; i < format; i++){
            nuevo.vals[i] = other.vals[i] + vals[i];
        }
        return nuevo;
    }
    Pixel<T,format> operator+(const int n){
        Pixel<T,format> nuevo;
        for(int i = 0; i < format; i++){
            nuevo.vals[i] = vals[i] +  n;
        }
        return nuevo;
    }
    Pixel<T,format> operator-(Pixel<T,format> other){
        Pixel<T,format> nuevo;
        for(int i = 0; i < format; i++){
            nuevo[i] = other[i] - vals[i];
        }
        return nuevo;
    }
    Pixel<T,format> operator*(Pixel<T,format> other){
        Pixel<T,format> nuevo;
        for(int i = 0; i < format; i++){
            nuevo[i] = other[i] * vals[i];
        }
        return nuevo;
    }
    void print(){
        for(auto &item: vals){
            cout << item<<",";
        }
        cout << endl;
    }
    void fill(){
        for(int i = 0; i < format; i++){
            vals[i] = randomNumber(1,20);
        }
    }
     
};
