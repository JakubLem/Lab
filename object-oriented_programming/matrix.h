#pragma once
class matrix
{


	double** tab;
	int sizeX; // wymiar poziomy tablicy tab
	int sizeY; // wymiar pionowy tablicy tab
public:
	matrix();
	~matrix();

	//wydobywanie wiersza
	double* getRow(int i);

	//printowanie ca³ej tablicy
	void printMATRIX();
	//printowanie wiersza (w argumencie)

	//printowanie kolumny (w argumencie)
};

