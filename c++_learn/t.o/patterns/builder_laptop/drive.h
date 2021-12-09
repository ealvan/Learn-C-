#include "item.h"

class Drive : public item {

	virtual string GetName() { return string(""); };
	virtual float GetPrice() { return 0.0; };
	virtual void GetConfiguration() {};
};

class HDD : public Drive {

	string GetName() {
		return "Hard disk drive: ";
	}
	float GetPrice() {
		return 150.00;
	}
	void GetConfiguration() {
		cout << "capacity: 1 TB, data transfer 1050 mbits/s" << endl;
	}
};

class SDD : public Drive {

	string GetName() {
		return "Solid state drive: ";
	}
	float GetPrice() {
		return 270.00;
	}
	void GetConfiguration() {
		cout << "capacity: 250 GB, data transfer 1800 mbits/s" << endl;
	}
};