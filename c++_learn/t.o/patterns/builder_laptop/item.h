
#pragma once


#include <iostream>
#include <string>
#include <vector>

using namespace std;

enum Color{
	AMARILLO,
	VERDE,
	AZUL,
	NEGRO
};

class item {
	Color color{Color::NEGRO};
public:
	virtual string GetName() { return ""; };
	virtual float GetPrice() { return 0.0; };
	virtual void GetConfiguration() {};
	void setColor(Color co){
		color = co;
	}
	
	string getColor(){
		switch(color){
			case Color::AMARILLO:
				return "Amarillo";
			break;
			case Color::VERDE:
				return "VERDE";
			break;
			case Color::NEGRO:
				return "NEGRO";
			break;
		}
		return "NO HAY COLOR";
	}
};

