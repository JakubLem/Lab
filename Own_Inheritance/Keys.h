#pragma once
#include "Instrument.h"

class Keys : public Instrument
{
	int quantityKeys;
	double maxVolume; //dB
	int pedalsCount; //liczba pedałów
	string keyMaterial;
public:
	/*KONSTRUKTORY*/
	//konstruktor domyślny
	Keys();
	//konstruktor w pełni sparametryzowany
	Keys(int _quantityKeys, double _maxVolume, int _pedalsCount, string _keyMaterial, string _name, string _description, Zastosowanie _zastosowanie, bool _used, string _model, string _productionCompany);
	//konstruktor kopiujący
	Keys(const Keys &k);
	
	/*SETTERY*/
	void setQuantityKeys(int _quantityKeys);
	void setMaxVolume(double _maxVolume);
	void setPedalsCount(int _pedalsCount);
	void setKeyMaterial(string _keyMaterial);

	/*GETTERY*/
	int getQuantityKeys();
	double getMaxVolume();
	int getPedalsCount();
	string getKeyMaterial();

	~Keys();
};

