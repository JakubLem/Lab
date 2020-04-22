#include "Guitar.h"
#include "Instrument.h"

Guitar::Guitar() 
    : Instrument() {
    stringsCount = 0;
    NylonString = true;
    guitarFrets = 15;
}

Guitar::Guitar(int _stringsCount, bool _NylonString, int _guitarFrets, string _name, string _description ,Zastosowanie _zastosowanie ,bool _used ,string _model, string _productionCompany) 
    : Instrument(_name, _description, _zastosowanie, _used, _model, _productionCompany) {
    stringsCount = _stringsCount;
    NylonString = _NylonString;
    guitarFrets = _guitarFrets;
}


Guitar::~Guitar()
{
}
