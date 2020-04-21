#pragma once
#include "ElectronicKeys"
class MIDIKeyboard : ElectronicKeys
{
	string integratedProgram;
	bool loopMode;
	
public:
	MIDIKeyboard();
	~MIDIKeyboard();
};

