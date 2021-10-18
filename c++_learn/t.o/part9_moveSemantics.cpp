#include <iostream>
using std::cout;
using std::endl;
using std::string;

class Auto{
    private:
        string name;
        int wheels;
    public:
        Auto(string n, int w):name(n),wheels(w){

        }
        Auto(const Auto& sourceCpy)
        :name(sourceCpy.name),wheels(sourceCpy.wheels)
        {
            cout << "Copy Constructor"<<endl;
        }
        Auto(Auto&& sourceMove)
            :name(sourceMove.name),wheels(sourceMove.wheels)
        {
            cout << "Move Constructor"<<endl;
        }
        ~Auto(){
            cout << "Destroyed"<<endl;
        }
        string getName() const{
            return name;
        }
        void setName(string name){
             this->name = name;
        }

};
//Auto par1
//Auto& par2
//const Auto& part3
//Auto&& part4
void display(Auto&& part4){
    cout << part4.getName()<<endl;
    part4.setName("Prince Garfield");
    cout << part4.getName()<<endl;
}
int main(){
    Auto a1{"Cuchao",4};
    //{"Cuchao",4}
    display(std::move(a1));

    cout << a1.getName() << endl;
}
