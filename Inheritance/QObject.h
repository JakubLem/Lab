#pragma once
#include <string>
using namespace std;

class QObject
{
	string name;
	

public:
	/*KONSTRUKTORY*/
	
	//konstruktor domyœlny
	QObject();
	//konstruktor w pe³ni sparametryzowany
	QObject(string _name);

	/*SETTETY*/
	void setName(string name);
	/*GETTERY*/
	string getName();
	/*DESTRUKTOR*/
	
	~QObject();
};

