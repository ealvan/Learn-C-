#include <builderDef.h>
void ClienteCode(Director& director) {
    BuilerEspecifico *builder = new BuilerEspecifico();
    director.set_builder(builder);
    cout << "ProductoBasico:\n";
    director.BuildProductoMin();

    Producto1* p = builder->GetProducto();
    p->ListaComp();
    delete p;
    std::cout << "ProductoCompleto:\n";
    director.BuildProductoCompleto();
    p = builder->GetProducto();
    p->ListaComp();
    delete p;

    cout << "Productobasico:\n";
    builder->ProducirParteA();
    builder->ProducirParteC();
    p = builder->GetProducto();
    p->ListaComp();

    delete p;
    delete builder;
};
    
int main(){
    Director *director = new Director();
    ClienteCode(*director);
    delete director;
    return 0;
}