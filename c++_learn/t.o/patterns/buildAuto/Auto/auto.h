#include <vector>
#include "../Piece/pieces.h"

using std::vector;

class Automovil{
protected:
    Marca marca;
    std::vector<Piece*> items;
public:
    Automovil() = default;

    Automovil(const Automovil& autom){
        cout << "Copy ctor"<<endl;
        marca = autom.marca;
        for(int i = 0; i < autom.items.size(); ++i){
            this->items.push_back(autom.items[i]);
        }
    }
    void addItem(Piece* item){
        items.push_back(item);
    }

    std::vector<Piece*> getItems(){
        return items;
    }
    void print(){
        cout << "Imprimendo Piezas ...."<<endl;
        if(items.size() > 0)
            for(auto& item: items){
                item->print();
            }
    }
    ~Automovil(){
        for(auto& item: items){
            delete item;
        }
    }
};
//-----------------------------------------------------------


