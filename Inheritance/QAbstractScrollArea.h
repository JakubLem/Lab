#pragma once
#include "QFrame.h"

enum class ScrollPosition {
	left,
	right,
	top,
	bottom
};

class QAbstractScrollArea : QFrame
{
	ScrollPosition scrollPosition;
	bool arrowUp;
	bool arrowDown;

public:
	/*KONSTRUKTORY*/

	//konstruktor domyœlny

	//konstruktor w pe³ni sparametryzowany

	//konstruktor w pe³ni sparametryzowany - klasy

	/*SETTETY*/

	/*SETTERY*/

	/*DESTRUKTOR*/
	QAbstractScrollArea();
	~QAbstractScrollArea();
};

