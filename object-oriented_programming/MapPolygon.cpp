#include "MapPolygon.h"
#include "polygon.h"
#include "RGBA.h"
#include <iostream>
#include <ostream>

using namespace std;

/*KONSTRUKTORY*/
//konstrkuktor domyœlny
MapPolygon::MapPolygon() : Polygon() {
	borderWidth = 1;
	borderColor = RGBA(8,8,8,255);
	fillColor = RGBA();
	opacity = 255;
}

//konstruktor w pe³ni sparametryzowany
MapPolygon::MapPolygon(Punkt2 * _vertices, int _count, int _borderWidth, RGBA _borderColor, RGBA _fillColor, int _opacity) : Polygon(_count, _vertices) {
	borderWidth = _borderWidth;
	borderColor = _borderColor;
	fillColor = _fillColor;
	opacity = _opacity;
}

//konstruktor kopiuj¹cy
MapPolygon::MapPolygon(const MapPolygon& mp) : Polygon(mp){
	borderWidth = mp.borderWidth;
	borderColor = RGBA(mp.borderColor);
	fillColor = RGBA(mp.fillColor);
	opacity = mp.opacity;
}
//konstruktor przenosz¹cy
MapPolygon::MapPolygon(MapPolygon&& mp) : Polygon(mp){
	borderWidth = move(mp.borderWidth);
	borderColor = move(mp.borderColor);
	fillColor = move(mp.fillColor);
	opacity = move(mp.opacity);
}


/*SETTERY*/
void MapPolygon::setBorderWidth(int s){
	borderWidth = s;
}

void MapPolygon::setBorderColor(int r, int g, int b, int a){
	borderColor.setR(r);
	borderColor.setG(g);
	borderColor.setB(b);
	borderColor.setA(a);
}

void MapPolygon::setBorderColor(RGBA bC){
	borderColor = bC;
}

void MapPolygon::setfillColor(int r, int g, int b, int a){
	fillColor.setR(r);
	fillColor.setG(g);
	fillColor.setB(b);
	fillColor.setA(a);
}

void MapPolygon::setfillColor(RGBA fC){
	fillColor = fC;
}

void MapPolygon::setOpacity(int o){
	opacity = o;
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
	return -1;
}

int MapPolygon::getfillColor(char rgba) {
	switch (rgba) {
	case 'r':
		return fillColor.getR();
	case 'g':
		return fillColor.getG();
	case 'b':
		return fillColor.getB();
	case 'a':
		return fillColor.getA();
	default:
		return -1;
	}
	return -1;
}

int MapPolygon::getOpacity() {
	return opacity;
}

ostream& operator<<(ostream& os, const MapPolygon& obj) {
	os << "Object MapPolygon: " << endl << "[" << endl;
	os << "borderWidth: " << obj.borderWidth << ".px" << endl;
	os << "borderColor: " << obj.borderColor << endl;
	os << "fillColor: " << obj.fillColor << endl;
	os << "opacity: " << obj.opacity << endl;
	os << "]" << endl;
	return os;
}


MapPolygon::~MapPolygon()
{
}