/*
*Autor: Miguel A. Guatibonza 
*Descripción: Ejercicio de control de empleados por medio del metodo herencia
*Fecha: 05-5-17
*/

#ifndef OFICINA_H
#define OFICINA_H
#include <string>
#include "Asistente.h"
#include "Empleado.h"

using std::string;

class Oficina : public Asistente{
			private:
				string jefe;
				string labor;
			public: 
				Oficina(string nombreIn, int edadIn, double salarioIn, string seccionIn, string asociacionIn,string jefeIn, string laborIn);
				~Oficina();
				
				string getJefe();
				string getLabor();


};
#endif 
