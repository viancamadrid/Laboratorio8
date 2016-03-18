#include "esculturas.h"
#include "obras.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

Esculturas::Esculturas(double peso, string material):Obras(nombre, autor, fecha){
}

Esculturas::~Esculturas(){	
}

string Esculturas::toString()const{
	stringstream ss;
	ss<<"Esculturas-> Peso: "<<peso<<"Material: "<<material;
	return ss.str();
}