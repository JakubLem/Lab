#include "MapPoint.h"





MapPoint::MapPoint(double x, double y, int radius, RGBA color) :
	Punkt2(x, y), visRadius{ radius }, visColor{ color }
{}


MapPoint::MapPoint() :
	MapPoint(0.0, 0.0, 0, { 0,0,0,255 })
{}


MapPoint::~MapPoint()
{
}
