#include "GrandPiano.h"
#include <string>
using namespace std;


/*KONSTRUKTORY*/
//konstruktor domyślny
GrandPiano::GrandPiano(){

}
//konstruktor w pełni sparametryzowany
GrandPiano::GrandPiano(double _size, RGB _Color, bool _metronome, bool _withChair, int _quantityKeys, double _maxVolume, int _pedalsCount, string _keyMaterial)
    : Keys(_quantityKeys, _maxVolume, _pedalsCount, _keyMaterial, this->getName, this->getDescription, this->getZastosowanie(), this->getUsed(), this->getModel(), this->getProductionCompany()) {
    
}
//konstruktor kopiujący
GrandPiano::GrandPiano(const GrandPiano &gp) 
    : Keys(gp) {

}

/*SETTERY*/
void GrandPiano::setSize(double _size){
    size = _size;
}
void GrandPiano::setColor(RGB _Color){
    Color = _Color;
}
void GrandPiano::setMetronome(bool _metronome){
    metronome = _metronome;
}
void GrandPiano::setWithChair(bool _withChair){
    withChair = _withChair;
}
/*GETTERY*/
double GrandPiano::getSize(){
    return size;
}
RGB GrandPiano::getColor(){
    return Color;
}
bool GrandPiano::gwtMetronome(){
    return metronome;
}
bool GrandPiano::getWithChair(){
    return withChair;
}


GrandPiano::~GrandPiano()
{
}
