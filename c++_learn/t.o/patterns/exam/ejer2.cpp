#include <iostream>
using std::cout;
using std::string;
using std::endl;

struct Animal{
    virtual void eat(std::string food ) const = 0;
};

struct Cat: Animal{
    void eat(std::string food ) const override{
        std::cout << "Eating..."<< food<<endl;
    }
};
//necesitamos agrgarle nuevas caracterisitcas ala clase sin laterarle las existentes
//y no es factible cambiar la clase Cat...
//Solucion ... Patron Decorator

enum class Color{
    BLACK,
    GREEN,
    RED
};
struct CatDecorator: public Cat{
    CatDecorator(Cat& cat):cat(cat){

    }
    void eat(std::string food ) const override{
        cat.eat(food);
    }
    int getSize(){
        return size;
    }
    string& getNombre(){
        return name;
    }
    private:
        Cat& cat;
        Color color{Color::BLACK};
        int size{12};
        string name{"Pipo"};
};

int main(){
    Cat cat;
    CatDecorator catdec{cat};
    cout << catdec.getNombre() << endl;
    cout << catdec.getSize() << endl;
    
}




