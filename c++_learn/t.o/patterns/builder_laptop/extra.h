#include "item.h"
class Impresora : public item {

	virtual string GetName() { return string(""); };
	virtual float GetPrice() { return 0.0; };
	virtual void GetConfiguration() {};
};
class HPPrint :public Impresora {

	string GetName() {
		return "HP Print v20";
	}
	float GetPrice() {
		return 3000.00;
	}
	void GetConfiguration() {
		cout << ", con tinta cargada, colores nitidos" << endl;
	}
};