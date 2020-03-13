/*
Jakub Lemiesiewicz klasa 3D
Plik polygon.cpp
Data:
*/

#include "polygon.h"
#include "punkt2.h"
#include <iostream>
#include <cmath>
using namespace std;




Polygon::Polygon(int _count, Punkt2* _vertices) {
	count = _count;
	vertices = new Punkt2[count];
	for (int i = 0; i < count; i++) {
		vertices[i] = _vertices[i];
	}
}
/*
Polygon::Polygon(Polygon& p) {
	count = p.count;
	for (int i = 0; i < p.count; i++) {
		vertices[i] = p.vertices[i];
	}
}
*/
void Polygon::setVertices(Punkt2* _vertices, int _count) {
	vertices = _vertices;
	count = _count;
}

void Polygon::changeVertex(int i, double x, double y) {
	vertices[i].setX(x);
	vertices[i].setY(y);
}

double Polygon::getPerimeter() {
	double result = 0;
	for (int i = 0; i < count - 1; i++) {
		result += sqrt(pow(vertices[i].getX() - vertices[i + 1].getX(), 2) + pow(vertices[i].getY() - vertices[i + 1].getY(), 2));
	}
	result += sqrt(pow(vertices[count].getX() - vertices[0].getX(), 2) + pow(vertices[count].getY() - vertices[0].getY(), 2));
	return result;
}

double Polygon::countTriangleArea(Punkt2 p1, Punkt2 p2, Punkt2 p3) {
	double a = p1.getDistance(p2);
	double b = p2.getDistance(p3);
	double c = p3.getDistance(p1);
	double p = (a+b+c) / 2;
	return sqrt((p - a) * (p - b) * (p - c));
}


double Polygon::countTriangleArea() {
	double result = 0;
	for (int i = 2; i < count; i += 2) {
		result += countTriangleArea(vertices[0], vertices[i], vertices[i - 1]);
	}
	return result;
}

