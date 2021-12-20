#include <iostream>
#include <memory>
using std::cout;
using std::string;
using std::endl;

struct Animal{
    virtual void eat(std::string food) const = 0;
};

struct Cat: Animal{
    void eat(std::string food) const override{
        std::cout << "Eating..."<<food<<std::endl;
    }
};
struct Dog{
    void setFood(std::string food){
        this->food = food;
    }
    void eat() const{
        std::cout << "Eating..."<<food<< std::endl;    
    }
    private:
        std::string food;
};
//------------------------------------------
//context: hay una clase ya implementada, y no se puede cambiar
//por que ya esta en produccion y necesitamos usarla en otros proyectos,
//pero no se puede cambiar su comportamiento para que se nos acomode 
//solucion: hacer un adaptador para que se pueda usar como las demas.....

//HACIENDO MI ADAPTER

struct Adapter: public Animal{
    explicit Adapter(Dog& anim)
    :animal(anim){}
    //haciendo implemetaciones obligatorias    
    void eat(std::string food) const override{
        //antes debemos cambiarle el food
        animal.setFood(food);
        animal.eat();
    }
    private:
        Dog & animal;
};

int main(){
    
    Dog dog{};//hago un perro
    //luego lo paso al adaptador 
    std::shared_ptr<Adapter> adap = std::make_shared<Adapter>(dog);
    //luego se hace polimorfismo
    std::shared_ptr<Animal> anim = adap;
    //y ahora uso mi metodo ya normalizado
    anim->eat("Comida de perro");
}
















