#include "item.h"
class Processor : public item {

	virtual string GetName() { return string(""); };
	virtual float GetPrice() { return 0.0; };
	virtual void GetConfiguration() {};
};

class IntelI5 :public Processor {

	string GetName() {
		return "Intel i5";
	}
	float GetPrice() {
		return 3000.00;
	}
	void GetConfiguration() {
		cout << "1.50 Ghz, up to 2.0 Ghz with turbo, 2 cores, 4 threads, 8 MB cache, RAM 4 GB - 8 GB" << endl;
	}
};

class IntelI7 :public Processor {

	string GetName() {
		return "Intel i7";
	}
	float GetPrice() {
		return 4700.00;
	}
	void GetConfiguration() {
		cout << "1.6 Ghz, up to 1.99 Ghz, 9na Gen, 4 cores, 8 threads, 16 MB cache, RAM 16 GB" << endl;
	}
};

class Pentium5 :public Processor {

	string GetName() {
		return "Pentium5";
	}
	float GetPrice() {
		return 200.00;
	}
	void GetConfiguration() {
		cout << "2.9 Ghz, up to 2.99 Ghz, 9na Gen, 4 cores, 8 threads, 29 MB cache, RAM 16 GB" << endl;
	}
};