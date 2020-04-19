#include "Map.h"
#include "polygon.h"
#include "PolyLine.h"
#include "MapPoint.h"
#include <initializer_list>

using namespace std;

Map::Map()
{
	polygons = new Polygon[3];
	pol_count = 3;
	polyLines = new PolyLine[2];
	lines_count = 2;
	points = new MapPoint[1];
	point_count = 1;
}

Map::Map(Polygon* _polygons, int _pol_count, PolyLine* _polyLines, int _lines_count, MapPoint* _points, int _point_count) {
	pol_count = _pol_count;
	polygons = new Polygon[pol_count];
	for (int i = 0; i < _pol_count; i++) {
		polygons[i] = _polygons[i];
	}

	lines_count = _lines_count;
	polyLines = new PolyLine[lines_count];
	for (int i = 0; i < lines_count; i++) {
		polyLines[i] = _polyLines[i];
	}

	point_count = _point_count;
	points = new MapPoint[point_count];
	for (int i = 0; i < point_count; i++) {
		points[i] = _points[i];
	}

}

Map::Map(initializer_list<Polygon> polygon_list, initializer_list<PolyLine> polyline_list, initializer_list<MapPoint> mappoint_list) {
	int i;

	pol_count = polygon_list.size();
	polygons = new Polygon[pol_count];
	i = 0;
	for (auto obj : polygon_list) {
		polygons[i] = obj;
		i++;
	}
	
	lines_count = polyline_list.size();
	polyLines = new PolyLine[lines_count];
	i = 0;
	for (auto obj : polyline_list) {
		polyLines[i] = obj;
		i++;
	}

	point_count = mappoint_list.size();
	points = new MapPoint[point_count];
	i = 0;
	for (auto obj : mappoint_list) {
		points[i] = obj;
		i++;
	}
}

//konstruktor kopiuj¹cy
Map::Map(const Map& m) {
	pol_count = m.pol_count;
	polygons = new Polygon[pol_count];
	polygons = m.polygons;

	lines_count = m.lines_count;
	polyLines = new PolyLine[lines_count];
	polyLines = m.polyLines;

	point_count = m.point_count;
	points = new MapPoint[point_count];
	points = m.points;
}

//konstruktor przenosz¹cy
Map::Map(Map&& m) {
	polygons = move(m.polygons);
	pol_count = move(m.pol_count);
	polyLines = move(m.polyLines);
	lines_count = move(m.lines_count);
	points = move(m.points);
	point_count = move(m.point_count);
}

/*GETTERY*/
Polygon Map::getPolygon(int i) {
	return polygons[i];
}

int Map::getPolCount() {
	return pol_count;
}

PolyLine Map::getPolyLine(int i) {
	return polyLines[i];
}

int Map::getLinesCount() {
	return lines_count;
}

Map& Map::operator=(const Map& obj) {
	if (&obj != this) {
		delete[] polygons;
		polygons = new Polygon[obj.pol_count];
		pol_count = obj.pol_count;
		for (int i = 0; i < pol_count; i++) {
			polygons[i] = obj.polygons[i];
		}

		delete[] polyLines;
		polyLines = new PolyLine[obj.lines_count];
		lines_count = obj.lines_count;
		for (int i = 0; i < lines_count; i++) {
			polyLines[i] = obj.polyLines[i];
		}

		delete[] points;
		points = new MapPoint[obj.point_count];
		point_count = obj.point_count;
		for (int i = 0; i < point_count; i++) {
			points[i] = obj.points[i];
		}
	}
	return *this;
}


Map::~Map()
{
}
