#include "QObject.h"
#include <string>

using namespace std;

/*KONSTRUKTORY*/

//konstruktor domyœlny
QObject::QObject() {
	name = "None";
}

//konstruktor w pe³ni sparametryzowany
QObject::QObject(string _name) {
	name = _name;
}

/*SETTETY*/
void QObject::setName(string _name) {
	name = _name;
}

/*GETTERY*/
string QObject::getName() {
	return name;
}

/*DESTRUKTOR*/

QObject::~QObject() {

}
