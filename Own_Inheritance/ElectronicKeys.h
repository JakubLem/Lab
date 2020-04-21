#pragma once
#include "Keys.h"
#include "Pad.h"

class ElectronicKeys : Keys
{
	bool dynamicKeyboard;
	bool wire;
	double deviceOperatingTime; //w godzinach - ile bez zasilacza mo¿e pracowaæ urz¹dzenie - analogicznie, jeœli bool wire = false; -> ta zmienna przyjmuje 0.0
	bool pad;
	Pad* pads;
	bool PithBender;
	bool ModulationJoistick;
public:
	ElectronicKeys();
	~ElectronicKeys();
};

