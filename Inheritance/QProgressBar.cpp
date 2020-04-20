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
) : QWidget(_visibility, _priority, _position, _width, _height, _border, _opacity, _name) {
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
) : QWidget(_qwidget) {
	min = _min;
	max = _max;
	step = _step;
	timeToStep = _timeToStep;
	pointerColor = _pointerColor;
	doneColor = _doneColor;
	restColor = _restColor;
	lineColor = _lineColor;
}
/*SETTETY*/
void QProgressBar::setMin(double _min) {
	min = _min;
}
void QProgressBar::setMax(double _max) {
	max = _max;
}
void QProgressBar::setStep(double _step) {
	step = _step;
}
void QProgressBar::setTimeToStep(double _timeToStep) {
	timeToStep = _timeToStep;
}
void QProgressBar::setPointerColor(RGB _pointerColor) {
	pointerColor = RGB(_pointerColor);
}
void QProgressBar::setDoneColor(RGB _doneColor) {
	doneColor = RGB(_doneColor);
}
void QProgressBar::setRestColor(RGB _restColor) {
	restColor = RGB(_restColor);
}
void QProgressBar::setLineColor(RGB _lineColor) {
	lineColor = RGB(_lineColor);
}

/*GETTERY*/
double QProgressBar::getMin() {
	return min;
}
double QProgressBar::getMax() {
	return max;
}
double QProgressBar::getStep() {
	return step;
}
double QProgressBar::getTimeToStep() {
	return timeToStep;
}
RGB QProgressBar::getPointerColor() {
	return pointerColor;
}
RGB QProgressBar::getDoneColor() {
	return doneColor;
}
RGB QProgressBar::getRestColor() {
	return restColor;
}
RGB QProgressBar::getLineColor() {
	return lineColor;
}


/*DESTRUKTOR*/

QProgressBar::~QProgressBar()
{
}
