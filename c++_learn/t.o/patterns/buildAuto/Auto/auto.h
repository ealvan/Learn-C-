#include <vector>
#include "../Piece/pieces.h"

using std::vector;

class Automovil{
protected:
    Marca marca;
    std::vector<Piece*> items;
public:
    Automovil(){};

    void addItem(Piece* item){
        items.push_back(item);
    }
    std::vector<Piece*> getItems(){
        return items;
    }
    ~Automovil(){
        
    }
};