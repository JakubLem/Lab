#include "RGBA.h"



RGBA::RGBA()
{
	r = 8;
	g = 8;
	b = 8;
	a = 255;
}

RGBA::RGBA(int _r, int _g, int _b, double _a) {
	r = _r;
	g = _g;
	b = _b;
	a = _a;
}

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


RGBA::~RGBA() {}
