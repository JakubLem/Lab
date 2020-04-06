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

/*GETTERY*/
int MapPoint::getVisRadius() {
	return visRadius;
}

RGBA MapPoint::getVisColor() {
	return visColor;
}

/*FUNKCJE*/
double MapPoint::getAngle() {
	return this->getAngle();
}


MapPoint::~MapPoint(){}