/*
*Autor: Miguel Guatibonza - 1759699
*Descripción: Ejercicio de compopsición
*Fecha: 05-5-17
*/


#include "Mes.h"

Mes::Mes(string nombreIn, int numeroIn){
		nombre = nombreIn;
		numero = numeroIn;
		
}
Mes::~Mes(){}

string Mes::getNombre(){
	return nombre;
}
int Mes::getNumero(){
	return numero;
}

void Mes::setNombre(string nombreIn){
		nombre = nombreIn;
}
void Mes::setNumero(int numeroIn){
		numero = numeroIn;
}
