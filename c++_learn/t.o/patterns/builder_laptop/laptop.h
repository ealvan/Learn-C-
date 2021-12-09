#include "drive.h"
#include "display.h"
#include "processor.h"



class laptop {
private:
	vector <item*> mLaptopParts;
public:
	void AddParts(item *item) {
		mLaptopParts.push_back(item);
	}

	float GetCost() {
		float cost = 0.0;
		for (auto item : mLaptopParts) {
			cost += item->GetPrice();
		}
		return cost;
	}

	void GetConfiguration() {
		for (auto i = 0; i < mLaptopParts.size();i++) {
			cout << 
			mLaptopParts[i]->GetName() << " : ";
			mLaptopParts[i]->GetConfiguration();
			
			cout << "Color: "<< mLaptopParts[i]->getColor()<<endl;
		}
	}


};

class laptopBuilder {

public:
	laptop *opcion1() {
		laptop *lap = new laptop();
		lap->AddParts(new IntelI5());
		lap->AddParts(new Normal());
		lap->AddParts(new HDD());
		return lap;
	}

	laptop *opcion2() {
		laptop *lap = new laptop();
		lap->AddParts(new IntelI7());
		lap->AddParts(new Normal());
		lap->AddParts(new SDD());
		return lap;
	}
};
