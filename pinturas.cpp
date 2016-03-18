#include "pinturas.h"
#include "obras.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

Pinturas::Pinturas(string nombre, string autor, string fecha, string material, string tecnica):Obras(nombre, autor, fecha),material(material),tecnica(tecnica){
}

Pinturas::~Pinturas(){	
}

string Pinturas::toString()const{
	stringstream ss;
	ss<<"Pintura-> Material: "<<material<<"Tecnica: "<<tecnica;
	return ss.str();
}