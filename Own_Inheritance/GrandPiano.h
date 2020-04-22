#pragma once
#include "RGB.h"
#include "Keys.h"
class GrandPiano : Keys
{
	double size; //1/2 3/4  4/4 
	RGB Color;
	bool metronome;
	bool withChair;
public:
	/*KONSTRUKTORY*/
	//konstruktor domyślny
	GrandPiano();
	//konstruktor w pełni sparametryzowany
	GrandPiano(double _size, RGB _Color, bool _metronome, bool _withChair, int _quantityKeys, double _maxVolume, int _pedalsCount, string _keyMaterial);
	//konstruktor kopiujący
	GrandPiano(const GrandPiano &gp);

	/*SETTERY*/
	void setSize(double _size);
	void setColor(RGB _Color);
	void setMetronome(bool _metronome);
	void setWithChair(bool _withChair);
	/*GETTERY*/
	double getSize(); 
	RGB getColor();
	bool gwtMetronome();
	bool getWithChair();
	
	~GrandPiano();
};

