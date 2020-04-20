#pragma once
#include "QWidget.h"
#include "RGB.h"

class QProgressBar : QWidget
{
	double min;
	double max;
	double step;
	double timeToStep;
	RGB pointerColor;
	RGB doneColor;
	RGB restColor;
	RGB lineColor;

public:
	/*KONSTRUKTORY*/

	//konstruktor domyœlny
	QProgressBar();
	//konstruktor w pe³ni sparametryzowany
	QProgressBar(double _min,
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
	);
	//konstruktor w pe³ni sparametryzowany - klasy
	QProgressBar(double _min,
		double _max,
		double _step,
		double _timeToStep,
		RGB _pointerColor,
		RGB _doneColor,
		RGB _restColor,
		RGB _lineColor,
		QWidget _qwidget
	);
	/*SETTETY*/
	void setMin(double _min);
	void setMax(double _max);
	void setStep(double _step);
	void setTimeToStep(double _timeToStep);
	void setPointerColor(RGB _pointerColor);
	void setDoneColor(RGB _doneColor);
	void setRestColor(RGB _restColor);
	void setLineColor(RGB _lineColor);

	/*GETTERY*/
	double getMin();
	double getMax();
	double getStep();
	double getTimeToStep();
	RGB getPointerColor();
	RGB getDoneColor();
	RGB getRestColor();
	RGB getLineColor();


	/*DESTRUKTOR*/
	
	~QProgressBar();
};

