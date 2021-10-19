#include <iostream>
using std::cout;
using std::endl;
using std::string;
class Obj{
    private:
        string name;
    public:
        Obj() = default;
        Obj(string n):name(n){}
        Obj(const Obj& src):Obj(src.name){
            cout << "Copy constructor"<<endl;
        }
        Obj(Obj&& src):Obj(src.name){
            cout << "MOVE constructor"<<endl;
        }
        string getName() const{
            return name;
        }
        ~Obj(){
            cout << "Destroyed"<<endl;
        }
        
};
void display(Obj src){
    cout << src.getName() <<endl;
}
int main(){
    Obj obj0("Hola");
    display(obj0);
}