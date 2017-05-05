/*
*Autor: Miguel A. Guatibonza 
*Descripción: Ejercicio de control de empleados por medio del metodo herencia
*Fecha: 05-5-17
*/

#include "Ejecutivo.h"

Ejecutivo::Ejecutivo(string nombreIn, int edadIn, double salarioIn, int numEmpleadosIn,int numOficinaIn):Empleado(nombreIn, edadIn, salarioIn){
	nombre = nombreIn;
	edad = edadIn;
	salario = salarioIn;
	numEmpleados = numEmpleadosIn;
	numOficina = numOficinaIn;
	}

Ejecutivo::~Ejecutivo(){}


int Ejecutivo::getNumEmpleados(){
		return numEmpleados;

}
int Ejecutivo::getNumOficina(){
		return numOficina;

}
