#pragma once
#include "Instrument.h"

class Keys : Instrument
{
	int quantityKeys;
	double maxVolume; //dB
	int pedalsCount; //liczba pedałów
	string keyMaterial;
public:
	Keys();
	~Keys();
};

