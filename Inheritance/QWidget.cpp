#include "QWidget.h"
#include "Border.h"
#include "QObject.h"
#include "Position.h"

using namespace std;


/*KONSTRUKTORY*/

//konstruktor domyœlny
QWidget::QWidget() 
	: QObject() {
	visibility = true;
	priority = 1;
	position = Position();
	width = 100.0;
	height = 100.0;
	border = Border();
	opacity = 1;
}
//konstruktor w pe³ni sparametryzowany
QWidget::QWidget(bool _visibility, int _priority, Position _position, double _width, double _height, Border _border, double _opacity, string _name) 
	: QObject(_name) {
	visibility = _visibility;
	priority = _priority;
	position = _position;
	width = _width;
	height = _height;
	border = _border;
	opacity = _opacity;
}
//konstruktor kopiuj¹cy
QWidget::QWidget(const QWidget& qw) : QObject((string)qw.getName()){
	visibility = qw.visibility;
	priority = qw.priority;
	position = qw.position;
	width = qw.width;
	height = qw.height;
	border = qw.border;
	opacity = qw.opacity;
}

/*SETTETY*/
void QWidget::setVisibility(bool _visibility) {
	visibility = _visibility;
}
void QWidget::setPriority(int _priority) {
	priority = _priority;
}
void QWidget::setPosition(Position _position) {
	position = _position;
}
void QWidget::setwidth(double _width) {
	width = _width;
}
void QWidget::setHeight(double _height) {
	height = _height;
}
void QWidget::setBorder(Border _border) {
	border = _border;
}
void QWidget::setOpacity(double _opacity) {
	opacity = _opacity;
}

/*GETTERY*/
bool QWidget::getVisibility() {
	return visibility;
}
int QWidget::getPriority() {
	return priority;
}
Position QWidget::getPosition() {
	return position;
}
double QWidget::getWidth() {
	return width;
}
double QWidget::getHeight() {
	return height;
}
Border QWidget::getBorder() {
	return border;
}
double QWidget::getOpacity() {
	return opacity;
}
string QWidget::getName() {
	return (string)this->getName();
}


/*DESTRUKTOR*/
QWidget::~QWidget(){}
