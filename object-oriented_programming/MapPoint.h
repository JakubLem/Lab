#pragma once
#include "RGBA.h"
#include "Punkt2.h"

class MapPoint : Punkt2 // po dwukropku podajemy klas�, kt�r� dziedziczy klasa MapPoint
{
	int visRadius; // promie� ko�a reprezentuj�cego punkt na mapie (w pikselach)

	RGBA visColor; // kolor ko�a reprezentuj�cego punkt na mapie


public:

	/*Konstruktory*/
	//konstruktor domy�lny
	MapPoint();
	//w pe�ni sparametryzowany
	MapPoint(double x, double y, int radius, RGBA color);

	/*SETTERY*/
	void setVisRadius(int r);
	void setVisColor(RGBA color);

	/*GETTERY*/
	int getVisRadius();
	RGBA getVisColor();
	~MapPoint();
};