#include "RGBA.h"
#include<ostream>
#include<iostream>
#include<initializer_list>

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

RGBA::RGBA(initializer_list<int> rgba_list) {
	if (rgba_list.size() == 4) {
		int i = 0;
		int tab[4];
		for (auto obj : rgba_list) {
			tab[i] = obj;
			i++;
		}
		r = tab[0];
		g = tab[1];
		b = tab[2];
		a = tab[3];
	} else {
		r = 255;
		g = 255;
		b = 255;
		a = 255;
	}
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
