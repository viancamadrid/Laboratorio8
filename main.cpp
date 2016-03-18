#include <iostream>
#include "obras.h"
#include "pinturas.h"
#include "esculturas.h"
#include "literatura.h"
#include "diseno.h"
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int menu();
int menu2();

int main(int argc, char const *argv[]){
	vector<Obras> obras;
	vector<Obras> eliminadas;
	int op=menu();
	while(op!=4){
		if(op==1){
			string nombre, autor, fecha;
			int op2=menu2();
			if(op2==1){
				string genero, epoca;
				cout<<"Ingrese nombre: ";
				cin>>nombre;
				cout<<"Ingrese autor: ";
				cin>>autor;
				cout<<"Ingrese fecha: ";
				cin>>fecha;
				cout<<"Ingrese genero: ";
				cin>>genero;
				cout<<"Ingrese epoca: ";
				cin>>epoca;
				obras.push_back(Literatura(nombre,autor,fecha,genero,epoca));
			/*}else if(op2==2){
				double peso;
				string material;
				cout<<"Ingrese nombre: ";
				cin>>nombre;
				cout<<"Ingrese autor: ";
				cin>>autor;
				cout<<"Ingrese fecha: ";
				cin>>fecha;
				cout<<"Ingrese peso: ";
				cin>>peso;
				cout<<"Ingrese material: ";
				cin>>material;
				obras.push_back(Esculturas(nombre,autor,fecha,peso,material));
			}else if(op2==3){
				string material, tecnica;
				cout<<"Ingrese nombre: ";
				cin>>nombre;
				cout<<"Ingrese autor: ";
				cin>>autor;
				cout<<"Ingrese fecha: ";
				cin>>fecha;
				cout<<"Ingrese material: ";
				cin>>material;
				cout<<"Ingrese tecnica: ";
				cin>>tecnica;
				obras.push_back(Pinturas(nombre,autor,fecha,material,tecnica));*/
			}else{

			}
		}else if(op==2){

		}
	}
	return 0;
}

int menu(){
	int opcion;
	cout<<"1. Agregar Obras"<<endl;
	cout<<"2. Eliminar Obras"<<endl;
	cout<<"3. Reporte"<<endl;
	cout<<"Ingrese Opcion: ";
	cin>>opcion;
	return opcion;
}

int menu2(){
	int opcion;
	cout<<"1. Agregar literatura"<<endl;
	cout<<"2. Agregar esculturas"<<endl;
	cout<<"3. Agregar pinturas"<<endl;
	cout<<"4. Agregar diseño"<<endl;
	cout<<"Ingrese Opcion: ";
	cin>>opcion;
	return opcion;
}