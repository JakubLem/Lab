#include "Keys.h"
#include "Instrument.h"
#include <string>
using namespace std;


/*KONSTRUKTORY*/
//konstruktor domyślny
Keys::Keys() 
    : Instrument() {
    quantityKeys = 0;
    maxVolume = 0.0;
    pedalsCount = 0;
    keyMaterial = "";
    
}
//konstruktor w pełni sparametryzowany
Keys::Keys(int _quantityKeys, double _maxVolume, int _pedalsCount, string _keyMaterial, string _name, string _description, Zastosowanie _zastosowanie, bool _used, string _model, string _productionCompany)
    : Instrument(_name, _description, _zastosowanie, _used, _model, _productionCompany) {
    quantityKeys = _quantityKeys;
    maxVolume = _maxVolume;
    pedalsCount = _pedalsCount;
    keyMaterial = _keyMaterial;

}
//konstruktor kopiujący
Keys::Keys(const Keys &k) 
    : Instrument(k){
    quantityKeys = k.quantityKeys;
    maxVolume = k.maxVolume;
    pedalsCount = k.pedalsCount;
    keyMaterial = k.keyMaterial;
}
	
/*SETTERY*/
void Keys::setQuantityKeys(int _quantityKeys){
    quantityKeys = _quantityKeys;
}
void Keys::setMaxVolume(double _maxVolume){
    maxVolume = _maxVolume;
}
void Keys::setPedalsCount(int _pedalsCount){
    pedalsCount = _pedalsCount;
}
void Keys::setKeyMaterial(string _keyMaterial){
    keyMaterial = _keyMaterial;
}

/*GETTERY*/
int Keys::getQuantityKeys(){
    return quantityKeys;
}
double Keys::getMaxVolume(){
    return maxVolume;
}
int Keys::getPedalsCount(){
    return pedalsCount;
}
string Keys::getKeyMaterial(){
    return keyMaterial;
}


Keys::~Keys()
{
}
