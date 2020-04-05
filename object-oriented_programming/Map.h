#pragma once

#include "polygon.h"
#include "PolyLine.h"
#include "MapPoint.h"
#include <initializer_list>
class Map
{
	Polygon* polygons;
	int pol_count;
	PolyLine* polyLines;
	int lines_count;
	MapPoint* points;
	int point_count;
	
public:
	/*KONSTRUKTORY*/
	//domy�lny
	Map();
	//w pe�ni sparametryzowany
	Map(Polygon * _polygons , int _pol_count , PolyLine * _polyLines, int _lines_count, MapPoint* _points, int _point_count);
	
	//konstruktor z initializer_list
	Map(initializer_list<Polygon> polygon_list, initializer_list<PolyLine> polyline_list, initializer_list<MapPoint> mappoint_list);

	//konstruktor kopiuj�cy
	Map(const Map& m);

	//konstruktor przenosz�cy
	Map(Map&& m);

	/*SETTERY*/


	/*GETTERY*/
	Polygon getPolygon(int i);
	int getPolCount();
	PolyLine getPolyLine(int i);
	int getLinesCount();



	~Map();
};


/*
konstruktory: domy�lny, w pe�ni sparametryzowany, kopiuj�cy,
przenosz�cy, z argumentem 'std::initializer_list<>' (to nie
musi by� jedyny argument),
*/

