#pragma once
#include "RGBA.h"
#include "punkt2.h"
#include "Map.h"
#include <initializer_list>

using namespace std;

class NextMap : public RGBA, public Punkt2
{
	Map* maps;
	int quantity;
public:

	/*KONSTRUKTORY*/
	//domyœlny
	NextMap();
	//w pe³ni sparametryzowany
	NextMap(Map * _maps, int _quantity, int _r, int _g, int _b, int _a, double _x, double _y);
	//w pe³ni sparametryzowany (class-version)
	NextMap(Map * _maps, int _quantity, RGBA rgbaOBJ, Punkt2 Punkt2OBJ);
	//z argumentem initializer list
	NextMap(initializer_list<Map>maps , RGBA rgbaOBJ, Punkt2 Punkt2OBJ);

	/*GETTERY*/
	Map* getMaps();
	Map getMap(int i);
	int getQuantity();

	/*SETTERY*/
	void setMap(int i, Map _Map);
	void setQuantity(int _quantity);

	/*DESTRUKTOR*/
	~NextMap();
};

