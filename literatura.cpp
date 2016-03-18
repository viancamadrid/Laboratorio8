#include "literatura.h"
#include "obras.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

Literatura::Literatura(string genero, string epoca):Obras(nombre, autor, fecha){
}

Literatura::~Literatura(){	
}

string Literatura::toString()const{
	stringstream ss;
	ss<<"Literatura-> Genero: "<<genero<<"Epoca: "<<epoca;
	return ss.str();
}