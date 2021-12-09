#include "item.h"

class DisplayType : public item {

	virtual string GetName() { return string(""); };
	virtual float GetPrice() { return 0.0; };
	virtual void GetConfiguration() {};
};

class Normal : public DisplayType {

	string GetName() {
		return "Non-touch screen: ";
	}
	float GetPrice() {
		return 195.00;
	}
	void GetConfiguration() {
		cout << "15.6 inch FHD(1920 x 1080), plane, ....etc" << endl;
	}
};

class MonitorPlasma : public DisplayType {

	string GetName() {
		return "MonitorPlasma screen: ";
	}
	float GetPrice() {
		return 200.00;
	}
	void GetConfiguration() {
		cout << "15.6 inch FHD(1920 x 1080), curver ....etc" << endl;
	}
};