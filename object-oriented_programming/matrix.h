#pragma once
class matrix
{


	double** tab;
	int sizeX; // wymiar poziomy tablicy tab
	int sizeY; // wymiar pionowy tablicy tab
public:
	//konstruktory
	matrix();
	matrix(double** _tab, int _sizeX, int _sizeY);
	//matrix(matrix& m);
	~matrix();

	//wydobywanie wiersza
	double* getRow(int num);

	//wydobywanie kolumny
	double* getColumn(int num);

	//printowanie ca³ej tablicy
	void printMATRIX();

	//printowanie wiersza (w argumencie)
	void printROW(int row_index);

	//printowanie kolumny (w argumencie)
	void printCOLUMN(int column_index);

};

