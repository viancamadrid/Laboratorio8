#include "diseno.h"
#include "obras.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

Diseno::Diseno(string terreno):Obras(nombre, autor, fecha){
}

Diseno::~Diseno(){	
}

string Diseno::toString()const{
	stringstream ss;
	ss<<"Diseño-> Terreno: "<<terreno;
	return ss.str();
}