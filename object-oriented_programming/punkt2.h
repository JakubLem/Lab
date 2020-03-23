/*
Jakub Lemiesiewicz klasa 3D
Plik punkt2.h
Data: 15.03.2020
*/
#pragma once

#include<ostream>
using namespace std;
class Punkt2
{
	double x{ 0.0 };
	double y{ 0.0 };

public:
	//zmienna statyczna zliczaj¹ca liczbê obiektów klasy Punkt2
	static unsigned int counter;
	//settery
	void setX(double _x);
	void setY(double _y);

	//konstruktory
	Punkt2(); //domyœlny
	Punkt2(double cord); //z jednym doublem
	Punkt2(double _x, double _y);
	Punkt2(const Punkt2& p); //kopiuj¹cy
	//Punkt2(); 

	//cout<<
	friend ostream& operator<<(ostream& os, const Punkt2& obj);
	
	//operatory
	Punkt2 operator+(const Punkt2& p) const;
	Punkt2 operator-(const Punkt2& p) const;
	double operator*(const Punkt2& p) const;
	Punkt2& operator=(const Punkt2 &p); //kopiuj¹cy operator przypisania
	//przenosz¹cy  opertor przypisania
	Punkt2& operator=(const Punkt2&& p);
	//gettery
	double getX() const;
	double getY() const;

	//wspó³rzêdne biegunowe
	double getRadius(); //wylicza promieñ
	double getAngle(); //daje k¹t

	//odleg³oœæ punktu od punktu _p
	double getDistance(Punkt2 p);
	double PoleTrojkota(Punkt2 p1, Punkt2 p2, Punkt2 p3);
	//destruktor
	~Punkt2();

	
};

