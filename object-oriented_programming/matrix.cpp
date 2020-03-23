#include "matrix.h"
#include <iostream>


matrix::matrix()
{
	sizeX = 3;
	sizeY = 3;
	tab = new double * [sizeY];
	for (int i = 0; i < 3; i++) {
		tab[i] = new double[sizeX];
	}
	double x;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			x = double(i + j);
			tab[i][j] = x;
		}
	}
}


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

void matrix::printMATRIX() {
	for (int i = 0; i < sizeY; i++) {
		for (int j = 0; j < sizeX; j++) {
			std::cout << tab[i][j] << " ";
		}
		std::cout << std::endl;
	}
}
