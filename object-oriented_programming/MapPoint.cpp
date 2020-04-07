#include "MapPoint.h"
#include "punkt2.h"


/*KONSTRUKTORY*/

MapPoint::MapPoint(double x, double y, int radius, RGBA color) : Punkt2(x, y) {
	visRadius =  radius ;
	visColor = color;
}


MapPoint::MapPoint() : Punkt2(0.0, 0.0) {
	visRadius = 0;
	visColor = RGBA(0, 0, 0, 255);
}

/*SETTERY*/
void MapPoint::setVisRadius(int r) {
	visRadius = r;
}

void MapPoint::setVisColor(RGBA color) {
	visColor = color;
}

void MapPoint::setX(double _x) {
	this->setX(_x);
}
void MapPoint::setY(double _y) {
	this->setY(_y);
}

/*GETTERY*/
int MapPoint::getVisRadius() {
	return visRadius;
}

RGBA MapPoint::getVisColor() {
	return visColor;
}

double MapPoint::getX() {
	return this->getX();
}
double MapPoint::getY() {
	return this->getY();
}

/*FUNKCJE*/
double MapPoint::getAngle() {
	return this->getAngle();
}


MapPoint::~MapPoint(){}