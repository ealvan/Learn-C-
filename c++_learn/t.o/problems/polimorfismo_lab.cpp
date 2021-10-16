#include <iostream>
using namespace std;

class Persona{
    protected:
        string nombre;
        int edad;
        double salario;
    public:
        Persona():nombre("Anonymous"),edad(-1),salario(0.0){   }
        Persona(string n,int e, double s)
        :nombre(n),edad(e),salario(s){}
        virtual ~Persona(){
            cout << "Destructor persona"<<endl;
        }
        virtual void presentarme() const{
            cout << "Soy una persona normal" << endl;
        }
};
class Arquitecto:virtual public Persona{
    public:
        Arquitecto(string n,int a, double s):Persona(n,a,s){ }
        void presentarme() const{
            cout << "Soy un Arquitecto divertido y me llamo "<< nombre << endl;
        }
};
class Doctor:virtual  public Persona{
    public:
        Doctor(string n,int a, double s):Persona(n,a,s){}
        void presentarme() const{
            cout << "Soy un Doctor serio y me llamo "<< nombre << endl;
        }
};
class Enfermera:virtual public Persona{
    public:
        Enfermera(string n, int a, double s):Persona(n,a,s){}
        void presentarme() const{
            cout << "Soy una Enfermera amable y me llamo "<< nombre << endl;
        }
};
class Bombero:virtual public Persona{
    public:
        Bombero(string n, int a, double s):Persona(n,a,s){}
        void presentarme() const{
            cout << "Soy un Bombero valiente y me llamo "<< nombre << endl;
        }
};
void display(Persona& obj){
    obj.presentarme();
}
int main(){
    Arquitecto arq("Pepe",23,1230.0);
    Doctor doc("Ramiro",34,5400.0);
    Enfermera enf("Alejandra",24,2500.0);
    Bombero bomb("Pedro",44, 100.0);
    //el poliformismo nos permite usar 
    display(arq);
    display(doc);
    display(enf);
    display(bomb);

}




