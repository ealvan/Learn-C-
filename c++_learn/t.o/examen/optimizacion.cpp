#include <iostream>
using std::cout;
using std::endl;
using std::string;
class Obj{
    private:
        string name;
    public:
        Obj(string n):name(n){}
        const string& getName() const{
            return name;
        }
        Obj(Obj&& src):name(src.name){
            cout << "Move constructor"<<endl;
        }
};
void foo(Obj obj){
    cout << obj.getName() << endl;
}
int main(){
    Obj uno("Obj hello");
    foo(std::move(uno));//moviendo por valor
}

