#include "diseno.h"
#include "obras.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

Diseno::Diseno(string nombre, string autor, string fecha, string terreno):Obras(nombre, autor, fecha),terreno(terreno){
}

Diseno::~Diseno(){	
}

string Diseno::toString()const{
	stringstream ss;
	ss<<"Diseño-> Terreno: "<<terreno;
	return ss.str();
}