#pragma once
#include <string>

using namespace std;

enum class Zastosowanie {
	Profesjonalne,
	Edukacyjne,
	Rozrywkowe
};

class Instrument
{
	string name;
	string description;
	Zastosowanie zastosowanie;
	bool used;
	string model;
	string productionCompany;

public:
	/*KONSTRUKTORY*/
	//Domyślny
	Instrument();
	//W pełni sparametryzowany
	Instrument(string _name, string _description, Zastosowanie _zastosowanie, bool _used, string _model, string _productionCompany);
	//Kopiujący
	Instrument(const Instrument &ins);
	/*SETTERY*/
	void setName(string _name);
	void setDescription(string _description);
	void setZastosowanie(Zastosowanie _zastosowanie);
	void setUsed(bool _used);
	void setModel(string _model);
	void setProductionCompany(string _productionCompany);
	/*GETTERY*/
	string getName();
	string getDescription();
	Zastosowanie getZastosowanie();
	bool getUsed();
	string getModel();
	string getProductionCompany();

	/*DESTRUKTOR*/
	~Instrument();
};

