#include "MapPolygon.h"
#include "polygon.h"
#include "RGBA.h"
#include <iostream>
#include <ostream>

using namespace std;

MapPolygon::MapPolygon() {
	borderWidth = 1;
	borderColor = RGBA();
	fillColor = RGBA();
	opacity = 1;
}

MapPolygon::MapPolygon(int _borderWidth, RGBA _borderColor, RGBA _fillColour, double _opacity) {
	borderWidth = _borderWidth;
	borderColor = _borderColor;
	fillColor = _fillColour;
	opacity = _opacity;
}

/*GETTERY*/
int MapPolygon::getBorderWidth() {
	return borderWidth;
}

int MapPolygon::getBorderColour(char rgba) {
	switch (rgba) {
	case 'r':
		return borderColor.getR();
	case 'g':
		return borderColor.getG();
	case 'b':
		return borderColor.getB();
	case 'a':
		return borderColor.getA();
	default:
		return -1;
	}
}


MapPolygon::~MapPolygon()
{
}