#pragma once
#include "QObject.h"
#include "Border.h"
#include "Position.h"

class QWidget : public QObject
{
	bool visibility;
	int priority;
	Position position;
	double width;
	double height;
	Border border;
	double opacity; //0-1;
public:
	/*KONSTRUKTORY*/

	//konstruktor domyœlny
	QWidget();
	//konstruktor w pe³ni sparametryzowany
	QWidget(bool _visibility, int _priority, Position _position, double _width, double _height, Border _border, double _opacity, string _name);
	//konstruktor kopiuj¹cy
	QWidget(const QWidget& qw);

	/*SETTETY*/
	void setVisibility(bool _visibility);
	void setPriority(int _priority);
	void setPosition(Position _position);
	void setwidth(double _width);
	void setHeight(double _height);
	void setBorder(Border _border);
	void setOpacity(double _opacity);


	/*GETTERY*/
	bool getVisibility();
	int getPriority();
	Position getPosition();
	double getWidth();
	double getHeight();
	Border getBorder();
	double getOpacity();
	string getName();

	/*DESTRUKTOR*/
	~QWidget();
};

