/*
*Autor: Miguel A. Guatibonza 
*Descripción: Ejercicio de control de empleados por medio del metodo herencia
*Fecha: 05-5-17
*/

#include "Operativo.h"


Operativo::Operativo(string nombreIn, int edadIn, double salarioIn, string seccionIn, string asociacionIn,string actividadIn):Asistente(nombreIn,edadIn,salarioIn,seccionIn,asociacionIn){
			nombre = nombreIn;
			edad = edadIn;
			salario = salarioIn;
			seccion = seccionIn;
			asociacion = asociacionIn;
			actividad = actividadIn;

}
Operativo::~Operativo(){}
string Operativo::getActividad(){
	return actividad;

}
