#pragma once
#include "RGBA.h"
#include "Punkt2.h"

class MapPoint : Punkt2 // po dwukropku podajemy klas�, kt�r� dziedziczy klasa MapPoint
{
	int visRadius; // promie� ko�a reprezentuj�cego punkt na mapie (w pikselach)

	RGBA visColor; // kolor ko�a reprezentuj�cego punkt na mapie


public:

	MapPoint();

	MapPoint(double x, double y, int radius, RGBA color);

	void setVisRadius(int r);
	void setVisColor(RGBA color);

	int getVisRadius();
	RGBA getVisColor();

}