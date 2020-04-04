#pragma once
#include "RGBA.h"
#include "Punkt2.h"

class MapPoint : Punkt2 // po dwukropku podajemy klasê, któr¹ dziedziczy klasa MapPoint
{
	int visRadius; // promieñ ko³a reprezentuj¹cego punkt na mapie (w pikselach)

	RGBA visColor; // kolor ko³a reprezentuj¹cego punkt na mapie


public:

	MapPoint();

	MapPoint(double x, double y, int radius, RGBA color);

	void setVisRadius(int r);
	void setVisColor(RGBA color);

	int getVisRadius();
	RGBA getVisColor();

}