#pragma once
#include "QAbstractScrollArea.h"
#include "RGB.h"
class QTextEdit : QAbstractScrollArea
{
	string insription;
	bool editable;
	string description;
	RGB fontColor;
	int fontSize;
	bool bold;
public:

	/*KONSTRUKTORY*/

	//konstruktor domy�lny

	//konstruktor w pe�ni sparametryzowany

	//konstruktor w pe�ni sparametryzowany - klasy

	/*SETTETY*/

	/*SETTERY*/

	/*DESTRUKTOR*/
	QTextEdit();
	~QTextEdit();
};

