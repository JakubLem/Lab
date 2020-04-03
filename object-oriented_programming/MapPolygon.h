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
	int opacity;

public:
	/*konstruktory*/
	//konstruktor domyœlny
	MapPolygon();
	//konstruktor w pe³ni sparametryzowany
	MapPolygon(int _borderWidth, RGBA _borderColor, RGBA _fillColor, int opacity);
	//konstruktor kopiuj¹cy
	MapPolygon(const MapPolygon& mp);
	//konstruktor przenosz¹cy
	MapPolygon(MapPolygon &&mp);
	//konstruktor z list¹ <initializer_list>
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

