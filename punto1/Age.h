/*
*Autor: Miguel Guatibonza - 1759699
*Descripción: Ejercicio de compopsición
*Fecha: 05-5-17
*/


#ifndef AGE_H
#define AGE_H

#include <string>
using std::string;

class Age{
		private: 
			int numero;
			int siglo;
			bool biciesto;

		public:
			Age(int numeroIn, int sigloIn, bool biciestoIn);
			~Age();
			
			
			int getNumero();
			int getSiglo();
			bool getBiciesto();

			
			void setNumero(int numeroIn);
			void setSiglo(int sigloIn);
			void setBiciesto(bool biciestoIn);
			

};
#endif
