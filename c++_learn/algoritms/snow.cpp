#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;


int calcularNieve(vector<int>& lista){
    int max = lista[0];
    for(const int& item: lista){
        max = item > max? item : max; 
    }
    int total  = 0;
    while(max >  0){
        bool contamos = false;
        int balde = 0;
        for(int i = 0; i < lista.size(); ++i){
            int value = lista[i];
            if(value >= max){
                cout << "Valor: "<<value<<"\tbalde: "<<balde<<endl;
                contamos =  true;
                total += balde;
                balde = 0;
                continue;
            }
            if(contamos){
                balde++;
            }
        }
        max--;
    }
    return total;
}

int main(){
    vector<int> alturasEdificios={0,1,0,2,1,0,3,2,1,1,1,5,0,1};

    int result = calcularNieve(alturasEdificios);
    cout << "Nieve : "<<result<<endl;
}