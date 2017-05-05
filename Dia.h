/*
*Autor: Miguel Guatibonza - 1759699
*Descripción: Ejercicio de compopsición
*Fecha: 05-5-17
*/

#ifndef DIA_H
#define DIA_H
#include <string>

using std::string;

class Dia{
	private: 
		string nombre;
		int numero;

	public:
		Dia(string nombreIn, int numeroIn);
		~Dia();
		
		string getNombre();
		int getNumero();

		void setNombre(string nombreIn);
		void setNumero(int numeroIn);



};
#endif
