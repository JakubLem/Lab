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

	//konstruktor domyœlny

	//konstruktor w pe³ni sparametryzowany

	//konstruktor w pe³ni sparametryzowany - klasy

	/*SETTETY*/

	/*SETTERY*/

	/*DESTRUKTOR*/
	QTextEdit();
	~QTextEdit();
};

