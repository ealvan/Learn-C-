/*
Un auto tiene
Motor
LLantas
------------
Color
Marca
costo
*/
enum Color{
    BLACK,
    RED,
    GREEN,
    BLUE
};
enum Marca{
    TOYOTA,
    TESLA,
    MERAKI
};
class Piece{
protected:
    Color color;
    Marca marca;
    double costo;
public:    
    Piece(Color c,Marca m, double cos)
    :color(c),marca(m),costo(cos){}  
    Piece() = default;

    void setColor(Color c){
        color = c;
    }
    void setMarca(Marca m){
        marca = m;
    }
    void setCosto(double c){
        costo = c;
    }
};




