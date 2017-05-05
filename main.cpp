/*
*Autor: Miguel Guatibonza
*Descripción: Ejemplo de clases de composicion
*Fecha: 05-5-17
*/
#include <iostream>
#include "Fecha.h"

using namespace std;

int main(){
	
	Fecha * objFecha1 = new Fecha("viernes", 5, "Mayo", 5, 2017, 21, false);
	Fecha * objFecha2 = new Fecha("martes", 7, "septiembre", 9, 1992, 20, true);
	Fecha * objFecha3 = new Fecha("Lunes", 30, "Junio", 6, 1967, 20, true);

	cout<<"Hoy es "<<objFecha1->getNombreDia()<<endl;
	cout<<"el año que naci es "<<objFecha2->getNumeroAge()<<endl;
	cout<<"El mes que cumple mi mamá es "<<objFecha3->getNombreMes()<<endl;
	
	objFecha2->setNombreMes("julio");
	objFecha1->setNombreDia("sabado");
	
	cout<<"El mes que cumple mi novia es "<<objFecha2->getNombreMes()<<endl;
	cout<<"Mañana es "<<objFecha1->getNombreDia()<<endl;

}
