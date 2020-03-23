/*
Jakub Lemiesiewicz klasa 3D
Plik punkt2.cpp
Data: 15.03.2020
*/
#include "punkt2.h"
#include <cmath>
#include <math.h>
#include <iostream>
Punkt2::Punkt2() {
	std::cout << endl << "Objekt zosta³ utworzony konstruktorem domyœlnym" << endl;
	x = 0.0;
	y = 0.0;
}

Punkt2::Punkt2(double coord) {
	std::cout << endl << "Objekt zosta³ utworzony konstruktorem przyjmuj¹cym jeden argument" << endl;
	x = coord;
	y = coord;
}

//konstruktor tworz¹cy 
Punkt2::Punkt2(double _x, double _y) {
	std::cout << endl << "Objekt zosta³ utworzony konstruktorem tworz¹cym z dwóch argumentów" << endl;
	x = _x;
	y = _y;
}

Punkt2::Punkt2(const Punkt2& p) {
	std::cout << endl << "Objekt zosta³ utworzony konstruktorem kopiuj¹cym" << endl;
	x = p.x;
	y = p.y;
}

Punkt2 Punkt2::operator+(const Punkt2& p) const{
	return Punkt2(x + p.getX(), y + p.getY());
}

Punkt2 Punkt2::operator-(const Punkt2& p) const {
	return Punkt2(x - p.getX(), y - p.getY());
}

//kopiuj¹cy operator przypisania
Punkt2& Punkt2::operator=(const Punkt2& p) {
	if (&p != this) {
		x = p.x;
		y = p.y;
	}
	return *this;
}

Punkt2& Punkt2::operator=(const Punkt2&& p) {
	x = p.x;
	y = p.y;
	std::cout << "Uruchomi³ siê przenosz¹cy  opertor przypisania " << std::endl;
	return *this;
}


//iloczyn skalarny -> zwracaj¹cy double
double Punkt2::operator*(const Punkt2& p) const {
	return ((x * p.getX()) + (y * p.getY()));
}

//cout<<
ostream& operator<<(ostream& os, const Punkt2& obj)
{
	os << "( " << obj.x << ", " << obj.y << " )";
	return os;
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




Punkt2::~Punkt2() {}


