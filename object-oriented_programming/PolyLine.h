#pragma once
#include "punkt2.h"
class PolyLine
{
	Punkt2* points;
	int count;
public:
	/*KONSTRUKTORY*/
	PolyLine();
	PolyLine(Punkt2* _points, int _count);
	PolyLine(initializer_list <Punkt2> _points);

	/*SETTERY*/
	void setPoint(int i, double _x, double _y);

	/*GETTERY*/
	Punkt2 getPoint(int i);


	~PolyLine();
};

