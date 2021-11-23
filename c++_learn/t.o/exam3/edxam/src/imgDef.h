#include "pixelDef.h"
#include <vector>
using std::vector;

template<typename T, const int format=Format::RGB>
class Img{
private:
    
public:
    int width;
    int height;
    vector<vector<Pixel<T,format>>> matrix;
    Img(int width,int height)
    :width(width),
    height(height),
    matrix(width,vector<Pixel<T>>(height,Pixel<T,format>{})){
        //explicitr constructor obligatorio
    }
    Img<T,format> operator+(const Img<T,format>& other){
        Img<T,format> nuevo(width,height);
        //cout <<"Hello :"<< other.matrix[0][0].vals[0] << endl;
        if(other.height==height && other.width == width){
            for( int i = 0; i < width; ++i){
                for(int j = 0; j < height; ++j){
                    // nuevo.matrix[i][j] = matrix[i][j] + nuevo.matrix[i][j];
                    for(int k = 0; k < format; ++k){
                        nuevo.matrix[i][j].vals[k] = other.matrix[i][j].vals[k] + matrix[i][j].vals[k];
                    }
                    // for(T& item : other.matrix[i][j].vals ){
                    //     nuevo.matrix[i][j].
                    // }
                }
            }
        }
        return nuevo;
    }
    Img<T,format> operator-(const Img<T,format>& other){
        Img<T,format> nuevo(width,height);
        if(other.height==height && other.width == width){
            for( int i = 0; i < width; ++i){
                for(int j = 0; j < height; ++j){
                    //nuevo.matrix[i][j] = nuevo.matrix[i][j] - matrix[i][j];
                    for(int k = 0; k < format; ++k){
                        nuevo.matrix[i][j].vals[k] = other.matrix[i][j].vals[k] - matrix[i][j].vals[k];
                    }
                }
            }
        }
        return nuevo;
    }
    Img<T,format> operator*(const Img<T,format>& other){
        Img<T,format> nuevo(width,height);
        if(other.height==height && other.width == width){
            for( int i = 0; i < width; ++i){
                for(int j = 0; j < height; ++j){
                    //nuevo.matrix[i][j] = nuevo.matrix[i][j] * matrix[i][j];
                    // for(int k = 0; k < format; ++k){
                    //     nuevo.matrix[i][j].vals[k] = other.matrix[i][j].vals[k] * matrix[i][j].vals[k];
                    // }
                }
            }
        }
        return nuevo;
    }
    Img<T,format> operator+(const int n){
        Img<T,format> nuevo(width,height);
        //cout <<"Hello :"<< other.matrix[0][0].vals[0] << endl;
        
        for( int i = 0; i < width; ++i){
            for(int j = 0; j < height; ++j){
                // nuevo.matrix[i][j] = matrix[i][j] + nuevo.matrix[i][j];
                // for(int k = 0; k < format; ++k){
                //     nuevo.matrix[i][j].vals[k] = matrix[i][j].vals[k] + n;
                // }
            }
        }
        
        return nuevo;        
    }
    void print(){
        for(auto& row: matrix){
            for(auto& item: row){
                item.print();
            }
            cout << endl;
        }
    }
    void fill(){
        for( int i = 0; i < width; ++i){
                for(int j = 0; j < height; ++j){
                    matrix[i][j].fill();           
                }
        }
    }

};
