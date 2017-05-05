/*
*Autor: Miguel A. Guatibonza 
*Descripción: Ejercicio de control de empleados por medio del metodo herencia
*Fecha: 05-5-17
*/

#include "Empleado.h"

Empleado::Empleado(string nombreIn, int edadIn, double salarioIn){
			nombre = nombreIn;
			edad = edadIn;
			salario = salarioIn;
}
Empleado::~Empleado(){}

string Empleado:: getNombre(){
	return nombre;
}
int Empleado::getEdad(){
	return edad;
}
double Empleado:: getSalario(){
	return salario;
}
