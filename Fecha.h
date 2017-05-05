/*
*Autor: Miguel Guatibonza - 1759699
*Descripción: Ejercicio de compopsición
*Fecha: 05-5-17
*/

#ifndef FECHA_H
#define FECHA_H

#include <string>
using std::string;
#include "Dia.h"
#include "Mes.h"
#include "Age.h"

class Fecha{
		private:
			Dia * objDia;
			Mes * objMes;
			Age * objAge;
		public:
			Fecha(string nombreD, int numeroD,string nombreM, int numeroM,int numeroA, int sigloA, bool biciestoA);
			~Fecha();

			//metodos o atributos de Dia
			string getNombreDia();
			int getNumeroDia();
			void setNombreDia(string nombreIn);
			void setNumeroDia(int numeroIn);
			
			//metodos o atributos de Mes
			string getNombreMes();
			int getNumeroMes();
			void setNombreMes(string nombreIn);
			void setNumeroMes(int numeroIn);
			
			//metodos o atributos de Age
			int getNumeroAge();
			int getSigloAge();
			bool getBiciestoAge();
			void setNumeroAge(int numeroIn);
			void setSigloAge(int sigloIn);
			void setBiciestoAge(bool biciestoIn);

};
#endif
