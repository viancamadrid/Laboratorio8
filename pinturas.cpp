#include "pinturas.h"
#include "obras.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

Pinturas::Pinturas(string material, string tecnica):Obras(nombre, autor, fecha){
}

Pinturas::~Pinturas(){	
}

string Pinturas::toString()const{
	stringstream ss;
	ss<<"Pintura-> Material: "<<material<<"Tecnica: "<<tecnica;
	return ss.str();
}