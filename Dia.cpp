/*
*Autor: Miguel Guatibonza - 1759699
*Descripción: Ejercicio de compopsición
*Fecha: 05-5-17
*/


#include "Dia.h"

Dia::Dia(string nombreIn, int numeroIn){
		nombre = nombreIn;
		numero = numeroIn;
		
}
Dia::~Dia(){}

string Dia::getNombre(){
	return nombre;
}
int Dia::getNumero(){
	return numero;
}

void Dia::setNombre(string nombreIn){
		nombre = nombreIn;
}
void Dia::setNumero(int numeroIn){
		numero = numeroIn;
}
