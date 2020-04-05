#pragma once

#include<ostream>
#include<iostream>
#include<initializer_list>

using namespace std;

class RGBA
{
	int r;
	int g;
	int b;
	int a;
public:
	//konstruktory
	RGBA(); //konstruktor domyœlny
	RGBA(int _r, int _g, int _b, int _a);
	RGBA(initializer_list<int> list);
	/*SETTERY*/
	void setR(int _r);
	void setG(int _g);
	void setB(int _b);
	void setA(int _a);

	/*GETTERY*/
	int getR();
	int getG();
	int getB();
	int getA();
	~RGBA(); //destruktor

	//operator COUT
	friend ostream& operator<<(ostream& os, const RGBA& obj);
};

