/*
*Autor: Miguel A. Guatibonza 
*Descripción: Ejercicio de control de empleados por medio del metodo herencia
*Fecha: 05-5-17
*/

#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>
using std::string;

class Empleado{
		protected:
			string nombre;
			int edad;
			double salario;
		public:
			Empleado(string nombreIn, int edadIn, double salarioIn);
			~Empleado();
			
			string getNombre();
			int getEdad();
			double getSalario();

};
#endif
