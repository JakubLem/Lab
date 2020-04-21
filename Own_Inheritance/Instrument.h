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

public:
	Instrument();
	~Instrument();
};

