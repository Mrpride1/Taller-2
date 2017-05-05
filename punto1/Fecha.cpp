/*
*Autor: Miguel Guatibonza
*Descripción: Ejemplo de clases de composicion
*Fecha: 05-5-17
*/

#include "Fecha.h"

Fecha::Fecha(string nombreD, int numeroD,string nombreM, int numeroM,int numeroA, int sigloA, bool biciestoA){
			objDia = new Dia(nombreD, numeroD);
			objMes  = new Mes(nombreM, numeroM);
			objAge  = new Age(numeroA, sigloA, biciestoA);

}
Fecha::~Fecha(){
	delete objDia;
	delete objMes;
	delete objAge;
}

//metodos de Dia
string Fecha::getNombreDia(){
	return objDia->getNombre();
	}
int Fecha::getNumeroDia(){
	return objDia->getNumero();
	}

void Fecha::setNombreDia(string nombreIn){
	objDia->setNombre(nombreIn);
	}
void Fecha::setNumeroDia(int numeroIn){
	objDia->setNumero(numeroIn);
	}
//metodos de Mes
string Fecha::getNombreMes(){
	return objMes->getNombre();
	}
int Fecha::getNumeroMes(){
	return objMes->getNumero();
	}

void Fecha::setNombreMes(string nombreIn){
	objMes->setNombre(nombreIn);
	}
void Fecha::setNumeroMes(int numeroIn){
	objMes->setNumero(numeroIn);
	}
//metodos de Age
int Fecha::getNumeroAge(){
	return objAge->getNumero();
	}
int Fecha::getSigloAge(){
	return objAge->getSiglo();
	}
bool Fecha::getBiciestoAge(){
	return objAge->getBiciesto();
	}

void Fecha::setNumeroAge(int numeroIn){
	objAge->setNumero(numeroIn);
	}
void Fecha::setSigloAge(int sigloIn){
	objAge->setSiglo(sigloIn);
	}
void Fecha::setBiciestoAge(bool biciestoIn){
	objAge->setBiciesto(biciestoIn);
	}
