#include <iostream>
using std::cout;
using std::string;
using std::endl;

class Engine{
private:
    string name{"No hay Name!!"};
    Engine() = default;
    Engine(const Engine& engine);
    const Engine& operator=(const Engine& );
public:
    static Engine& getInstance(){
        static Engine myengine;
        return myengine; 
    }
    const string& getName(){
        return name;
    }
    void setName(string newName){
        name = newName;
    }

};

int main(){
    auto print = [](const string& name) {
        cout << "Nombre de ENGINE: "<<name<< endl;
    };
    Engine& myEngine = Engine::getInstance();
    print(Engine::getInstance().getName());
    myEngine.setName("My Engine!!!");
    print(myEngine.getName());

    // Engine noPermitido = Engine::getInstance(); //NO SE VA A PODER

}