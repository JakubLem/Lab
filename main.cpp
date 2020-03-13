/*
Jakub Lemiesiewicz klasa 3D
Plik main.cpp
Data: 
*/


#include "punkt2.h"
#include "polygon.h"
#include <iostream>

using namespace std;
int main() {
	//Punkt2
	//definicja dwóch punktów wspó³rzêdnych
	Punkt2 punkt = Punkt2(1.0,2.0);
	Punkt2 punkt2 = Punkt2(3.0, 2.0);

	//Dzia³ania metod klasy
	
	cout << "---------" << endl << "Punkt2" << endl << "---------" << endl;
	cout << "Punkt2 punkt = Punkt2(1.0,2.0);" << endl;
	cout << "Punkt2 p2 = Punkt2(3.0, 2.0);" << endl;
	cout << "punkt.getX(): " << punkt.getX() << endl;
	cout << "punkt.getY(): " << punkt.getY() << endl;
	cout << "punkt.getRadius(): " << punkt.getRadius() << endl;
	cout << "punkt.getAngle(): " << punkt.getAngle() << endl;
	cout << "punkt.getDistance(p2): " << punkt.getDistance(punkt2) << endl;

	//wywo³anie konstruktora domyœlnego
	Punkt2 test = Punkt2(); 


	//Polygon
	//Tworzenie listy punktów z których chcemy utworzyæ polygon
	Punkt2 p1 = Punkt2(6.5,7.0);
	Punkt2 p2 = Punkt2(1.0,1.0);
	Punkt2 p3 = Punkt2(3.0,-8.0);
	Punkt2 p4 = Punkt2(-1.0,-1.0);
	Punkt2* vertices = new Punkt2[4]{ p1,p2,p3,p4 };

	Polygon pol1 = Polygon(4,vertices);


	return 0;
}
