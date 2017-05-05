/*
*Autor: Miguel A. Guatibonza 
*Descripción: Ejercicio de control de empleados por medio del metodo herencia
*Fecha: 05-5-17
*/

#ifndef OPERATIVO_H
#define OPERATIVO_H
#include <string>
#include "Asistente.h"

using std::string;

class Operativo : public Asistente{

			private:
				string actividad;
			public:
				Operativo(string nombreIn, int edadIn, double salarioIn, string seccionIn, string asociacionIn, string actividadIn);
				~Operativo();
				string getActividad();




};
#endif
