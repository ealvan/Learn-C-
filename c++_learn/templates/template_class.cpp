#include <iostream>
using namespace std;
template<typename T>
class GenericHuman{
    private:
        T mem1;
    public:
        void setValue(const T& val){
            mem1 = val;
        }
        const T& getValue(){
            return mem1;
        }
};
class Human{
    private:
        string name ="Anonymous";
    public:
        void introduceSelf() const {
            cout << "I am "<< name << endl;
        }
};
int main(){
    GenericHuman<int> h1;
    h1.setValue(12);
    cout << "Value: "<< h1.getValue() << endl;
    GenericHuman<string> h2;
    h2.setValue("Hello dude");
    cout << "Value: "<< h1.getValue() << endl;

    Human b;
    GenericHuman<Human> gh;
    gh.setValue(b);
    gh.getValue().introduceSelf();   
}