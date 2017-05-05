/*
*Autor: Miguel A. Guatibonza 
*Descripción: Ejercicio de control de empleados por medio del metodo herencia
*Fecha: 05-5-17
*/

#ifndef EJECUTIVO_H
#define EJECUTIVO_H

#include "Empleado.h"
#include <string>
using std::string;

class Ejecutivo:public Empleado{
		private:
			int numEmpleados;
			int numOficina;
		public:
			Ejecutivo(string nombreIn, int edadIn, double salarioIn, int numEmpleadosIn,int numOficinaIn);
			~Ejecutivo();
			
			int getNumEmpleados();
			int getNumOficina();


};
#endif
