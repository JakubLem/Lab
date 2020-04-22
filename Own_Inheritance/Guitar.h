#pragma once
#include "Instrument.h"

class Guitar : public Instrument
{
	int stringsCount; //liczba strun
	bool NylonString; //czy struny są nylonowe?
	int guitarFrets; //liczba progów gitarowych
public:
	/*KONSTRUKTORY*/
	//domyślny
	Guitar();
	//w pełni sparametryzowany
	Guitar(int _stringsCount, bool _NylonString, int _guitarFrets, string _name, string _description ,Zastosowanie _zastosowanie ,bool _used ,string _model, string _productionCompany);
	//kopiujący
	Guitar(const Guitar &g);

	/*SETTERY*/
	void setStringsCount(int _stringsCount);
	void setNylonString(bool _NylonString);
	void setGuitarFrets(int _guitarFrets);
	/*GETTERY*/
	int getStringCount();
	bool getNylonString();
	int getGuitarFrets();
	~Guitar();
};

