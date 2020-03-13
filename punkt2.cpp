/*
Jakub Lemiesiewicz klasa 3D
Plik punkt2.cpp
Data: 
*/
#include "punkt2.h"
#include <cmath>
#include <math.h>

Punkt2::Punkt2() {
	x = 0.0;
	y = 0.0;
}

//konstruktor tworz¹cy 
Punkt2::Punkt2(double _x, double _y) {
	x = _x;
	y = _y;
}

Punkt2::Punkt2(const Punkt2& p) {
	x = p.x;
	y = p.y;
}

Punkt2 Punkt2::operator+(const Punkt2& p) const{
	return Punkt2(x + p.getX(), y + p.getY());
}

Punkt2 Punkt2::operator-(const Punkt2& p) const {
	return Punkt2(x - p.getX(), y - p.getY());
}

//iloczyn skalarny -> zwracaj¹cy double
double Punkt2::operator*(const Punkt2& p) const {
	return ((x * p.getX()) + (y * p.getY()));
}


void Punkt2::setX(double _x)
{
	x = _x;
}

void Punkt2::setY(double _y)
{
	y = _y;
}

double Punkt2::getX() const
{
	return x;
}

double Punkt2::getY() const
{
	return y;
}

double Punkt2::getAngle() {
	return atan2(y, x);
}

double Punkt2::getRadius() {
	return pow(x, 2) + pow(y, 2);
}

double Punkt2::getDistance(Punkt2 p) {
	return sqrt(pow(p.getX() - x, 2) + pow(p.getY() - y, 2));
}

double Punkt2::PoleTrojkota(Punkt2 p1, Punkt2 p2, Punkt2 p3) {
	double a = p1.getDistance(p2);
	double b = p2.getDistance(p3);
	double c = p3.getDistance(p1);
	double p = (a + b + c) / 2;
	return sqrt((p - a) * (p - b) * (p - c));
}
