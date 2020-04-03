#pragma once
#include "RGBA.h"
#include "polygon.h"

#include <initializer_list>
#include<iostream>
#include<ostream>
using namespace std;

class MapPolygon : Polygon
{
	int borderWidth;
	RGBA borderColor;
	RGBA fillColor;
	double opacity;

public:
	/*konstruktory*/
	//konstruktor domy�lny
	MapPolygon();
	//konstruktor w pe�ni sparametryzowany
	MapPolygon(int _borderWidth, RGBA _borderColor, RGBA _fillColour, double opacity);
	//konstruktor kopiuj�cy
	//konstruktor przenosz�cy
	//konstruktor z list� <initializer_list>

	/*SETTERY*/
	void setBorderWidth(int s);
	void setBorderColor(int r, int g, int b, int a);
	void setBorderColor(RGBA bc);
	void setfillColor(int r, int g, int b, int a);
	void setfillColor(RGBA fc);

	/*GETTERY*/
	int getBorderWidth();
	int getBorderColour(char rgba);
	int getfillColor(char rgba);
	int getOpacity();
	
	
	



	//destruktor
	~MapPolygon();
};
