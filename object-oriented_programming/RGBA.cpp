#include "RGBA.h"
#include<ostream>
#include<iostream>

using namespace std;

RGBA::RGBA()
{
	r = 255;
	g = 255;
	b = 255;
	a = 255;
}

RGBA::RGBA(int _r, int _g, int _b, int _a) {
	r = _r;
	g = _g;
	b = _b;
	a = _a;
}

/*SETTERY*/
void RGBA::setR(int _r) {
	r = _r;
}

void RGBA::setG(int _g) {
	g = _g;
}

void RGBA::setB(int _b) {
	b = _b;
}

void RGBA::setA(int _a) {
	a = _a;
}

/*GETTERY*/
int RGBA::getR() {
	return r;
}

int RGBA::getG() {
	return g;
}

int RGBA::getB() {
	return b;
}

int RGBA::getA() {
	return a;
}

ostream& operator<<(ostream& os, const RGBA& obj) {
	os << "rgba(" << obj.r << "," << obj.g << "," << obj.b << "," << obj.a << ")";
	return os;
}

RGBA::~RGBA() {}
