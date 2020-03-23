/*
Jakub Lemiesiewicz klasa 3D
Plik main.cpp
Data: 15.03.2020
*/
//test z kompa
//test z lapka

#include "punkt2.h"
#include "polygon.h"
#include "matrix.h"
#include <iostream>
#include <vector>
#include <cstdio>
#include <initializer_list>

using namespace std;
int main() {
	//Punkt2
	//definicja dw�ch punkt�w wsp�rz�dnych
	Punkt2 punkt = Punkt2(1.0,2.0);
	Punkt2 punkt2 = Punkt2(3.0, 2.0);

	//Dzia�ania metod klasy
	
	cout << "---------" << endl << "Punkt2" << endl << "---------" << endl;
	cout << "Punkt2 punkt = Punkt2(1.0,2.0);" << endl;
	cout << "Punkt2 p2 = Punkt2(3.0, 2.0);" << endl;
	cout << "punkt.getX(): " << punkt.getX() << endl;
	cout << "punkt.getY(): " << punkt.getY() << endl;
	cout << "punkt.getRadius(): " << punkt.getRadius() << endl;
	cout << "punkt.getAngle(): " << punkt.getAngle() << endl;
	cout << "punkt.getDistance(p2): " << punkt.getDistance(punkt2) << endl;
	//wywo�anie konstruktora domy�lnego
	Punkt2 test = Punkt2(); 


	//Polygon
	//Tworzenie listy punkt�w z kt�rych chcemy utworzy� polygon
	Punkt2 p1 = Punkt2(6.5,7.0);
	Punkt2 p2 = Punkt2(1.0,1.0);
	Punkt2 p3 = Punkt2(3.0,-8.0);
	Punkt2 p4 = Punkt2(-1.0,-1.0);
	Punkt2* vertices = new Punkt2[4]{ p1,p2,p3,Punkt2{12,2} };

	Polygon pol1 = Polygon(4,vertices);

	//testowanie operatora przypisania dla obiektów klasy Punkt2:
	Punkt2 pierwszy{ 13.0, 30.0 };
	Punkt2 drugi{ 1.0,3.0 };
	pierwszy = drugi; //tu działa kopiujący operator przypisania

	Punkt2 testowy_kop_oper_przyp = (pierwszy = drugi);

	//test
	Punkt2* coords = new Punkt2[4]{ Punkt2(0.0,0.0), Punkt2(1.0,0.0) ,Punkt2(1.0,1.0), Punkt2{0.0,1.0}};
	Polygon kwadrat = Polygon(4,coords);
	Punkt2 w1 = kwadrat[2];
	cout << "kwadrat[3]:"<<kwadrat[3];
	kwadrat[3] = { 13,2 };
	cout << "kwadrat[3]: " << kwadrat[3];

	cout << endl << "test" << endl;
	cout << "w1.getX(): " <<w1.getX() <<endl;
	cout << "w2.getY(): " << w1.getY() << endl;


	//testowanie konstruntora z *quantity*
	Polygon quan = Polygon(4);
	cout << "quan" << endl;
	for (int i = 0; i < 4; i++) {
		cout << i << endl;
		cout << quan[i].getX() << endl;
		cout << quan[i].getY() << endl;
	}
	
	//testowanie operatora cout
	cout << endl << "//testowanie operatora cout" << endl;
	cout << w1<<endl;

	//testowanie initializer_list
	/*int*/

	Punkt2 objl = { 12.0,3.0 };


	/*Punkt2*/
	initializer_list<Punkt2> Punkt2_list = { {13.0,2.0},{2.0,4.0}, };
	cout << endl << "initializer_list<Punkt2> Punkt2_list = { {13.0,2.0},{2.0,4.0}, };" << endl;
	/*Testowanie objektu*/
	cout << "Punkt2_list.size(): " <<Punkt2_list.size() << endl;
	cout << "Punkt2_list.begin()->getX(): " << Punkt2_list.begin()->getX();
	/*------------------*/

	/*Tworzenie obiektu korzystając z konstruktora*/
	Polygon next_i_l = Polygon(Punkt2_list);
	cout << endl<<"Wypisywanie polygona (test)"<<endl<<next_i_l<<endl;
	cout << next_i_l[1];


	//testowanie move
	cout << endl << "Testowanie move" << endl;
	Polygon movetest = move(next_i_l);
	cout << movetest;


	/*LAB 39*/
	cout << endl << "LAB 39" << endl;
	/*Implementacja zadanego kodu ze strony*/
	Punkt2 lab39p1 = Punkt2(1.0, 2.0);
	Punkt2 lab39p2 = lab39p1;
	Punkt2 lab39p3 = lab39p1 + lab39p2;
	Punkt2 lab39p4 = Punkt2(1000, 2000) + Punkt2(3000, 4000);
	Punkt2 lab39p5 = Punkt2(10, 20);
	Punkt2 lab39p6 = Punkt2(100, 200) + Punkt2(100, 200);

	/*LAB 40*/
	cout << endl << "LAB 40" << endl;
	/*Implementacja zadanego kodu ze strony*/
	Punkt2 lab40p1 = Punkt2(1.0, 2.0);// zwykły konstruktor
	lab40p1 = Punkt2(100.0, 200.0);  //przenoszący operator przypisania 

	/*testowanie operatorów dla Polygon*/
	cout << endl << "testowanie operatorów dla Polygon" << endl;
	Polygon lab40pol1 = movetest;
	cout << lab40pol1;


	/*MATRIX*/
	cout << endl << "MATRIX" << endl;
	matrix o = matrix();
	cout << endl << "main.cpp print całej tablicy" << endl;
	o.printMATRIX();
	double* row = o.getRow(2);
	cout << endl << "row print" << endl;
	cout << row[0];
	cout << row[1];
	cout << row[2];

	


















	return 0;
}
