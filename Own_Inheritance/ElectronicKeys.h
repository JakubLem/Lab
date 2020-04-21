#pragma once
#include "Keys.h"
#include "Pad.h"

class ElectronicKeys : Keys
{
	bool dynamicKeyboard;
	bool wire;
	double deviceOperatingTime; //w godzinach - ile bez zasilacza mo�e pracowa� urz�dzenie - analogicznie, je�li bool wire = false; -> ta zmienna przyjmuje 0.0
	bool pad;
	Pad* pads;
	bool PithBender;
	bool ModulationJoistick;
	bool speakers;
public:
	ElectronicKeys();
	~ElectronicKeys();
};

