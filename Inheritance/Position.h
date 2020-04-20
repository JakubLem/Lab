#pragma once

enum class Type {
	Relative,
	Absolute,
	Static,
	Fixed
};

class Position
{
	Type type;
	double left;
	double right;

public:

	Position();
	~Position();
};

