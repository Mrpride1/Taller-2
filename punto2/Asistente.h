/*
*Autor: Miguel A. Guatibonza 
*Descripción: Ejercicio de control de empleados por medio del metodo herencia
*Fecha: 05-5-17
*/

#ifndef ASISTENTE_H
#define ASISTENTE_H

#include <string>
#include "Empleado.h"

using std::string;

class Asistente : public Empleado{
			protected:
				string seccion;
				string asociacion;
			public:
				Asistente(string nombreIn, int edadIn, double salarioIn, string seccionIn, string asociacionIn);
				~Asistente();
				
				string getSeccion();
				string getAsociacion();



};
#endif
