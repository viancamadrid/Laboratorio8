#pragma once

#include <string>

using std::string;

class Obras{
protected:
	string nombre, autor, fecha;
public:
	Obras(string,string,string);
	virtual ~Obras();
	virtual string toString()const;
};