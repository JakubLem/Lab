#pragma once
class RGBA
{
	int r;
	int g;
	int b;
	int a;
public:
	//konstruktory
	RGBA(); //konstruktor domyœlny
	RGBA(int _r, int _g, int _b, double _a);

	
	int getR();
	int getG();
	int getB();
	int getA();
	~RGBA(); //destruktor
};

