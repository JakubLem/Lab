#include "QProgressBar.h"
#include "QWidget.h"
#include "RGB.h"

using namespace std;

/*KONSTRUKTORY*/

//konstruktor domyœlny
QProgressBar::QProgressBar() {

}
//konstruktor w pe³ni sparametryzowany
QProgressBar::QProgressBar(double _min,
	double _max,
	double _step,
	double _timeToStep,
	RGB _pointerColor,
	RGB _doneColor,
	RGB _restColor,
	RGB _lineColor,
	bool _visibility,
	int _priority,
	Position _position,
	double _width,
	double _height,
	Border _border,
	double _opacity,
	string _name
) : QWidget(bool _visibility, int _priority, Position _position, double _width, double _height, Border _border, double _opacity, string _name
) {
	min = _min;
	max = _max;
	step = _step;
	timeToStep = _timeToStep;
	pointerColor = _pointerColor;
	doneColor = _doneColor;
	restColor = _restColor;
	lineColor = _lineColor;
}
//konstruktor w pe³ni sparametryzowany - klasy
QProgressBar::QProgressBar(double _min,
	double _max,
	double _step,
	double _timeToStep,
	RGB _pointerColor,
	RGB _doneColor,
	RGB _restColor,
	RGB _lineColor,
	QWidget _qwidget
) {

}
/*SETTETY*/
void QProgressBar::setMin(double _min) {

}
void QProgressBar::setMax(double _max) {

}
void QProgressBar::setStep(double _step) {

}
void QProgressBar::setTimeToStep(double _timeToStep) {

}
void QProgressBar::setPointerColor(RGB _pointerColor) {

}
void QProgressBar::setDoneColor(RGB _doneColor) {

}
void QProgressBar::setRestColor(RGB _restColor) {

}
void QProgressBar::setLineColor(RGB _lineColor) {

}

/*GETTERY*/
double QProgressBar::getMin() {

}
double QProgressBar::getMax() {

}
double QProgressBar::getStep() {

}
double QProgressBar::getTimeToStep() {

}
RGB QProgressBar::getPointerColor() {

}
RGB QProgressBar::getDoneColor() {

}
RGB QProgressBar::getRestColor() {

}
RGB QProgressBar::getLineColor() {

}


/*DESTRUKTOR*/

QProgressBar::~QProgressBar()
{
}
