#pragma once
#include "RGBA.h"
#include "Punkt2.h"

class MapPoint : Punkt2 // po dwukropku podajemy klasê, któr¹ dziedziczy klasa MapPoint
{
	int visRadius; // promieñ ko³a reprezentuj¹cego punkt na mapie (w pikselach)

	RGBA visColor; // kolor ko³a reprezentuj¹cego punkt na mapie


public:

	/*Konstruktory*/
	//konstruktor domyœlny
	MapPoint();
	//w pe³ni sparametryzowany
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
	///zwracaj¹ca wartoœæ promienia
	double getAngle();


	~MapPoint();
};