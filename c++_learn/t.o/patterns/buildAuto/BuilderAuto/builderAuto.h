#include "../Auto/auto.h"

class BuilderAuto{
    // Automovil autom;
public:
    virtual void buildLlanta()=0;
    virtual void buildVentana()=0;
    virtual void buildMotor()=0;
    virtual void buildAsiento(int n)=0;
    virtual void buildTimon()=0;
    virtual void buildBateria()=0;
    virtual void buildAlternador()=0;
    virtual void makeAuto()=0;
    virtual Automovil* getAuto() = 0;
    virtual ~BuilderAuto(){
        //destructor virtual
    }
};

//------------------------------------
class Normal:public BuilderAuto{
private:
    Automovil autom;    
public:
    Normal(){
        
    };
    void buildLlanta()override{
        Llanta *ll = new Llanta(12,120,Tipo::AltoDesenpenio,Color::BLACK,Marca::MERAKI,120);
        autom.addItem(ll);
    };
    void buildVentana()override{
        Ventana* vv = new Ventana(Color::BLUE,Marca::TESLA,120,123.12,12);
        autom.addItem(vv);
    };
    void buildMotor()override{
        Motor* mm = new Motor(Color::BLUE,Marca::TESLA,120,13);
        autom.addItem(mm);
    };
    void buildAsiento(int n){
        srand(time(NULL));
        for(int i = 0; i < n; ++i){
            int marca = Marca::MERAKI;
            Asiento *aa  = new Asiento(Color::BLUE,Marca::TESLA,120,123,mapa[Marca(marca)]);
            autom.addItem(aa);
        }
    };
    void buildTimon()override{
        Timon *tt  = new Timon(Color::BLUE,Marca::TESLA,120,12);
        autom.addItem(tt);
    };
    void buildBateria()override{
        Bateria *bb = new Bateria(Color::BLUE,Marca::TESLA,120,15);
        autom.addItem(bb);
    };
    void buildAlternador()override{
        Alternador* alt = new Alternador(Color::BLUE,Marca::TESLA,120,12,23);
        autom.addItem(alt);
    };
    void makeAuto()override{
        buildLlanta();
        buildVentana();
        buildMotor();
        buildAsiento(2);
        buildTimon();
        buildBateria();
        buildAlternador();
    }
    Automovil* getAuto()override{
        return &autom;
    }
};
//---------------------------------------------------------
class Toyota:public BuilderAuto{
private:
    Automovil autom;    
public:
    Toyota(){
        
    };
    void buildLlanta()override{
        Llanta *ll = new Llanta(12,120,Tipo::AltoDesenpenio,Color::BLACK,Marca::MERAKI,120);
        autom.addItem(ll);
    };
    void buildVentana()override{
        Ventana* vv = new Ventana(Color::RED,Marca::TOYOTA,120,123.12,12);
        autom.addItem(vv);
    };
    void buildMotor()override{
        Motor* mm = new Motor(Color::GREEN,Marca::TOYOTA,120,13);
        autom.addItem(mm);
    };
    void buildAsiento(int n){
        srand(time(NULL));
        for(int i = 0; i < n; ++i){
            int marca = Marca::MERAKI;
            Asiento *aa  = new Asiento(Color::BLUE,Marca::TOYOTA,120,123,mapa[Marca(marca)]);
            autom.addItem(aa);
        }
    };
    void buildTimon()override{
        Timon *tt  = new Timon(Color::RED,Marca::TOYOTA,120,12);
        autom.addItem(tt);
    };
    void buildBateria()override{
        Bateria *bb = new Bateria(Color::BLACK,Marca::TOYOTA,120,15);
        autom.addItem(bb);
    };
    void buildAlternador()override{
        Alternador* alt = new Alternador(Color::GREEN,Marca::TOYOTA,120,12,23);
        autom.addItem(alt);
    };
    void makeAuto()override{
        buildLlanta();
        buildVentana();
        buildMotor();
        buildAsiento(6);
        buildTimon();
        buildBateria();
        buildAlternador();
    }
    Automovil* getAuto()override{
        return &autom;
    }
};
//---------------------------------------------------------
class Tesla: public BuilderAuto{
private:
    Automovil autom;    
public:
    Tesla()= default;
    
    void buildLlanta()override{
        Llanta *ll = new Llanta(12,120,Tipo::AltoDesenpenio,Color::BLACK,Marca::TESLA,120);
        autom.addItem(ll);
    };
    void buildVentana()override{
        Ventana* vv = new Ventana(Color::RED,Marca::TESLA,120,123.12,12);
        autom.addItem(vv);
    };
    void buildMotor()override{
        Motor* mm = new Motor(Color::GREEN,Marca::TESLA,120,13);
        autom.addItem(mm);
    };
    void buildAsiento(int n){
        srand(time(NULL));
        for(int i = 0; i < n; ++i){
            int marca = Marca::MERAKI;
            Asiento *aa  = new Asiento(Color::BLUE,Marca::TESLA,120,123,mapa[Marca(marca)]);
            autom.addItem(aa);
        }
    };
    void buildTimon()override{
        Timon *tt  = new Timon(Color::RED,Marca::TESLA,120,12);
        autom.addItem(tt);
    };
    void buildBateria()override{
        Bateria *bb = new Bateria(Color::BLACK,Marca::TESLA,120,15);
        autom.addItem(bb);
    };
    void buildAlternador()override{
        Alternador* alt = new Alternador(Color::GREEN,Marca::TESLA,120,12,23);
        autom.addItem(alt);
    };
    void makeAuto()override{
        buildLlanta();
        buildVentana();
        buildMotor();
        buildAsiento(6);
        buildTimon();
        buildBateria();
        buildAlternador();
    }
    Automovil* getAuto()override{
        return &autom;
    }
};


