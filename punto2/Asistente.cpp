/*
*Autor: Miguel A. Guatibonza 
*Descripción: Ejercicio de control de empleados por medio del metodo herencia
*Fecha: 05-5-17
*/


#include "Asistente.h"

Asistente::Asistente(string nombreIn, int edadIn, double salarioIn, string seccionIn, string asociacionIn):Empleado(nombre,edad,salario){
			nombre = nombreIn;
			edad = edadIn;
			salario = salarioIn;
			seccion = seccionIn;
			asociacion = asociacionIn;
			
}
Asistente::~Asistente(){}
string Asistente::getSeccion(){
		return seccion;
}
string Asistente::getAsociacion(){
		return asociacion;
}
