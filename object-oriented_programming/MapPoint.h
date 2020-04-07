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
	void setX(double _x);
	void setY(double _y);
	/*GETTERY*/
	int getVisRadius();
	RGBA getVisColor();
	double getX();
	double getY();

	/*FUNKCJE*/
	///zwracaj�ca warto�� promienia
	double getAngle();


	~MapPoint();
};