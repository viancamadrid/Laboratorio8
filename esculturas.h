#pragma once

#include "obras.h"
#include <string>

using std::string;

class Esculturas: public Obras{
	double peso;
	string material;
public:
	Esculturas(double, string);
	virtual ~Esculturas();
	virtual string toString()const;	
};