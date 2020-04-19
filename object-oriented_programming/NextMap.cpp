#include "NextMap.h"
#include "RGBA.h"
#include "punkt2.h"
#include "Map.h"
#include <initializer_list>



/*KONSTRUKTORY*/
//domyœlny
NextMap::NextMap() 
	: Punkt2() , RGBA(){
	quantity = 1;
	maps = new Map[1];
	maps[0] = Map();
}

//w pe³ni sparametryzowany
NextMap::NextMap(Map* _maps, int _quantity, int _r, int _g, int _b, int _a, double _x, double _y) 
	: RGBA(_r, _g, _b, _a) , Punkt2(_x, _y) {
	quantity = _quantity;
	maps = new Map[quantity];
	for (int i = 0; i < quantity; i++) {
		maps[i] = _maps[i];
	}
}

//w pe³ni sparametryzowany (class-version)
NextMap::NextMap(Map* _maps, int _quantity, RGBA rgbaOBJ, Punkt2 Punkt2OBJ) 
	: RGBA(rgbaOBJ) , Punkt2(Punkt2OBJ) {
	quantity = _quantity;
	maps = new Map[quantity];
	for (int i = 0; i < quantity; i++) {
		maps[i] = _maps[i];
	}

}

//z argumentem initializer list
NextMap::NextMap(initializer_list<Map>_maps, RGBA rgbaOBJ, Punkt2 Punkt2OBJ) 
	: RGBA(rgbaOBJ), Punkt2(Punkt2OBJ) {
	quantity = _maps.size();
	maps = new Map[quantity];
	int i = 0;
	for (auto obj : _maps) {
		maps[i] = obj;
		i++;
	}
}

/*GETTERY*/
Map* NextMap::getMaps() {
	return maps;
}
Map NextMap::getMap(int i) {
	return maps[i];
}
int NextMap::getQuantity() {
	return quantity;
}

/*SETTERY*/
void NextMap::setMap(int i, Map _Map) {
	if (i >= quantity) {
		cout << endl << "Podano zly iterator!" << endl;
	}
	else {
		maps[i] = _Map;
	}
}

void NextMap::setQuantity(int _quantity) {
	quantity = _quantity;
}


NextMap::NextMap::~NextMap() {
	delete[] maps;
	delete& quantity;
}
