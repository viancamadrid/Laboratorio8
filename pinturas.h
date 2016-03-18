#pragma once

#include "obras.h"
#include <string>

using std::string;

class Pinturas: public Obras{
	string material, tecnica;
public:
	Pinturas(string, string);
	virtual ~Pinturas();
	virtual string toString()const;
};