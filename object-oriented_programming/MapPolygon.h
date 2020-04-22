#pragma once
#include "RGBA.h"
#include "polygon.h"

#include <initializer_list>
#include<iostream>
#include<ostream>
using namespace std;

class MapPolygon : public Polygon
{
	int borderWidth;
	RGBA borderColor;
	RGBA fillColor;
	int opacity;

public:
	/*konstruktory*/
	//konstruktor domy�lny
	MapPolygon();
	//konstruktor w pe�ni sparametryzowany
	MapPolygon(Punkt2* _vertices, int _count, int _borderWidth, RGBA _borderColor, RGBA _fillColor, int opacity);
	//konstruktor kopiuj�cy
	MapPolygon(const MapPolygon& mp);
	//konstruktor przenosz�cy
	MapPolygon(MapPolygon &&mp);
	//konstruktor z list� <initializer_list>
	MapPolygon(initializer_list <Polygon> p);

	/*SETTERY*/
	void setBorderWidth(int s);
	void setBorderColor(int r, int g, int b, int a);
	void setBorderColor(RGBA bC);
	void setfillColor(int r, int g, int b, int a);
	void setfillColor(RGBA fC);
	void setOpacity(int o);

	/*GETTERY*/
	int getBorderWidth();
	int getBorderColour(char rgba);
	int getfillColor(char rgba);
	int getOpacity();
	
	
	

	friend ostream& operator<<(ostream& os, const MapPolygon& obj);

	//destruktor
	~MapPolygon();
};

