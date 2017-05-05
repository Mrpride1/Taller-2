/*
*Autor: Miguel Guatibonza - 1759699
*Descripción: Ejercicio de compopsición
*Fecha: 05-5-17
*/

#ifndef MES_H
#define MES_H

#include <string>
using std::string;

class Mes{
		private: 
			string nombre;
			int numero;

		public:
			Mes(string nombreIn, int numeroIn);
			~Mes();
			
			string getNombre();
			int getNumero();

			void setNombre(string nombreIn);
			void setNumero(int numeroIn);
			


};
#endif
