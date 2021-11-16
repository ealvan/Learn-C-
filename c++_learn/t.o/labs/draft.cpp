#include <iostream>

using namespace std;

//clase Comun1 con un template
//el tipo T por defecto será char, mientras que 
//la variable generada en tiempo de compilación N será 8
//luego, el template adaptará en tiempo de 
//compilación la clase comun1 en función de lo
// que tengan T y N como valores al ser
// instanciada la clase para crear objetos
template <class T = char, int N = 8>
class Comun1 {
// T contiene el tipo de dato de bloque[],
// este se deducirá en tiempo de compilación
   T bloque[N];
public:
   //declaracion del método set
   // T contiene el tipo de dato de tval, 
   //este se deducirá en tiempo de compilación
   void set(int num, T tval);
   //declaracion del método get
   // T contiene el tipo de dato de get, 
   //este se deducirá en tiempo de compilación
   T get(int num);
};

template <class T, int N>
// T contiene el tipo de dato de tval, este se deducirá en tiempo de compilación
//int contiene el número de indice del arreglo bloque
void Comun1<T, N>::set(int num, T tval) {
  bloque[num] = tval;
}

//int contiene el número de indice del arreglo bloque
template <class T, int N>
T Comun1<T, N>::get(int num) {
  return bloque[num];
}

int main()
{
   //Creamos una clase Comun1, y le 
   //pasamos como parametros al template int y 5
   Comun1 <int, 5> objInt;
   //Creamos una clase Comun1, y le 
   //pasamos como parametros al template double y 5
   Comun1 <double, 5> objFloat;
   //Creamos una clase Comun1, usando 
   //los valores por defecto del template
   Comun1 <> obj;
   //llamamos al método set pasando 
   //parametros indice y un numero int
   objInt.set(0,10);
   //llamamos al método set pasando 
   //parametros indice y un numero float
   objFloat.set(2, 3.1);

   //comprobamos que los valores del 
   //tipo T en la template se adaptaron a lo que 
   //pasamos comp parametros al template 
   //( es decir int y 5), imprime un int
   std::cout <<objInt.get(0) << std::endl;
   //comprobamos que los valores del tipo T 
   //en la template se adaptaron a lo que 
   //pasamos comp parametros al template 
   //( es decir double y 5), imprime un double
   std::cout <<objFloat.get(2) << std::endl;
   //comprobamos que los valores del tipo T en 
   //la template se adaptaron a los valores 
   //del template por defecto ( es decir char y 8)
   //,imprime un char correspondiente al ASCII 4
   std::cout <<obj.get(4) << std::endl;
   //retornamos al S.O.
   return 0;
}

