/*
*Autor: Miguel Guatibonza - 1759699
*Descripción: Ejercicio de compopsición
*Fecha: 05-5-17
*/

#include "Age.h"

Age::Age(int numeroIn, int sigloIn, bool biciestoIn){
			numero = numeroIn;
			siglo = sigloIn;
			biciesto = biciestoIn;

} 
			
Age::~Age(){}
			
			
int Age:: getNumero(){
	return numero;
}
int Age::getSiglo(){
	return siglo;
}
bool Age::getBiciesto(){
	return biciesto;
}
			

void Age::setNumero(int numeroIn){
	numero = numeroIn;
}
void Age::setSiglo(int sigloIn){
	siglo = sigloIn;
}
void Age::setBiciesto(bool biciestoIn){
	biciesto = biciestoIn;
}
