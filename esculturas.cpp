#include "esculturas.h"
#include "obras.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

Esculturas::Esculturas(string nombre, string autor, string fecha, double peso, string material):Obras(nombre, autor, fecha),peso(peso),material(material){
}

Esculturas::~Esculturas(){	
}

string Esculturas::toString()const{
	stringstream ss;
	ss<<"Esculturas-> Peso: "<<peso<<"Material: "<<material;
	return ss.str();
}