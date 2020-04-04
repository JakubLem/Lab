#include "PolyLine.h"
#include "punkt2.h"


/*KONSTRUKTORY*/

//domyœlny
PolyLine::PolyLine() {
	count = 2;
	points = new Punkt2[count];
	points[0] = Punkt2(0.0, 0.0);
	points[1] = Punkt2(1.0, 0.0);

}

//sparametryzowwany
PolyLine::PolyLine(Punkt2* _points, int _count) {
	count = _count;
	points = new Punkt2[count];
	for (int i = 0; i < count; i++) {
		points[i] = _points[i];
	}
}

//z initializer_list
PolyLine::PolyLine(initializer_list <Punkt2> list) {
	count = list.size();
	points = new Punkt2[count];
	int i = 0;
	for (auto obj : list) {
		points[i] = obj;
		i++;
	}
}

/*SETTERY*/
void PolyLine::setPoint(int i, double _x, double _y) {
	if (i <= count) {
		points[i].setX(_x);
		points[i].setY(_y);
	}
}

/*GETTERY*/
Punkt2 PolyLine::getPoint(int i) {
	return points[i];
}

PolyLine::~PolyLine()
{
}
