/*
*Autor: Miguel A. Guatibonza 
*Descripción: Ejercicio de control de empleados por medio del metodo herencia
*Fecha: 05-5-17
*/

#include "Oficina.h"


Oficina::Oficina(string nombreIn, int edadIn, double salarioIn, string seccionIn, string asociacionIn,string jefeIn, string laborIn):Asistente(nombreIn,edadIn,salarioIn,seccionIn,asociacionIn){
			nombre = nombreIn;
			edad = edadIn;
			salario = salarioIn;
			seccion = seccionIn;
			asociacion = asociacionIn;
			jefe = jefeIn;
			labor = laborIn;
}
Oficina::~Oficina(){}
string Oficina::getJefe(){
	return jefe;
}
string Oficina::getLabor(){
	return labor;
}
