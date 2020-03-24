#include "matrix.h"
#include <iostream>


matrix::matrix()
{
	sizeX = 3;
	sizeY = 3;
	tab = new double * [sizeY];
	for (int i = 0; i < 3; i++) {
		tab[i] = new double[sizeX];
		for (int j = 0; j < 3; j++) {
			tab[i][j] = i + j;
		}
	}
}

matrix::matrix(double** _tab, int _sizeX, int _sizeY) {
	sizeX = _sizeX;
	sizeY = _sizeY;
	tab = new double* [sizeY];
	for (int i = 0; i < 3; i++) {
		tab[i] = new double[sizeX];
		for (int j = 0; j < 3; j++) {
			tab[i][j] = _tab[i][j];
		}
	}
}
/*
matrix::matrix(matrix& m) {
	sizeX = m.sizeX;
	sizeY = m.sizeY;
}*/


matrix::~matrix()
{
}


double* matrix::getRow(int num) {
	double* result = new double[sizeX];
	for (int i = 0; i < sizeX; i++) {
		result[i] = tab[num][i];
	}
	return result;
}

double* matrix::getColumn(int num) {
	double* result = new double[sizeY];
	for (int i = 0; i < sizeY; i++) {
		result[i] = tab[i][num];
	}
	return result;
}

void matrix::printMATRIX() {
	for (int i = 0; i < sizeY; i++) {
		for (int j = 0; j < sizeX; j++) {
			std::cout << tab[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

void matrix::printROW(int row_index) {
	for (int i = 0; i < sizeX; i++) {
		std::cout << tab[row_index][i] << " " ;
	}
}

void matrix::printCOLUMN(int column_index) {
	for (int i = 0; i < sizeY; i++) {
		std::cout << tab[i][column_index] << " " ;
	}
}