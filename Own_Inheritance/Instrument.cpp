#include "Instrument.h"

/*KONSTRUKTORY*/
//Domyślny
Instrument::Instrument(){
    name = "";
    description = "";
    //zastosowanie = ;
    used = false;
    model = "";
    productionCompany = "";
}
//W pełni sparametryzowany
Instrument::Instrument(string _name, string _description, Zastosowanie _zastosowanie, bool _used, string _model, string _productionCompany){
    name = _name;
    description = _description;
    zastosowanie = _zastosowanie;
    used = _used;
    model = _model;
    productionCompany = _productionCompany;
}
//Kopiujący
Instrument::Instrument(const Instrument &ins){
    name = ins.name;
    description = ins.description;
    zastosowanie = ins.zastosowanie;
    used = ins.used;
}
/*SETTERY*/
void Instrument::setName(string _name){
    name = _name;
}
void Instrument::setDescription(string _description){
    description = _description;
}
void Instrument::setZastosowanie(Zastosowanie _zastosowanie){
    zastosowanie = _zastosowanie;
}
void Instrument::setUsed(bool _used){
    used = _used;
}
void Instrument::setModel(string _model){
    model = _model;
}
void Instrument::setProductionCompany(string _productionCompany){
    productionCompany = _productionCompany;
}
/*GETTERY*/
string Instrument::getName(){
    return name;
}
string Instrument::getDescription(){
    return description;
}
Zastosowanie Instrument::getZastosowanie(){
    return zastosowanie;
}
bool Instrument::getUsed(){
    return used;
}
string Instrument::getModel(){
    return model;
}
string Instrument::getProductionCompany(){
    return productionCompany;
}
/*DESTRUKTOR*/
Instrument::~Instrument()
{
}
