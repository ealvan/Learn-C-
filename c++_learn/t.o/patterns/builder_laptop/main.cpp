#include "laptop.h"

int main()
{
	laptopBuilder cotizar;
	cout << "Laptop Lenovo XY \n";
	
	laptop *lenovo = cotizar.opcion1();
	lenovo->GetConfiguration();
	cout << "precio: " << lenovo->GetCost() << endl;
}