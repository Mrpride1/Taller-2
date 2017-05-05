/*
*Autor: Miguel A. Guatibonza 
*Descripción: Ejercicio de control de empleados por medio del metodo herencia
*Fecha: 05-5-17
*/


#include <iostream>
#include "Ejecutivo.h"
#include "Asistente.h"
#include "Oficina.h"
#include "Operativo.h"

using namespace std;

int main(){
		Ejecutivo * objJuan = new Ejecutivo("Juan",30,1000000,100,302);
		Ejecutivo * objPedro = new Ejecutivo("Pedro",60,1500000,200,102);
		Oficina * objAlberta = new Oficina("Alberta",40,100000,"2A","SintraStark","Pedro","Contabilidad");
		Operativo * objCarlos = new Operativo("Carlos",20,50000,"4F","SintraStark","Aseo");
		
		cout<<"Juan gana "<<objJuan->getSalario()<<endl;
		cout<<"Pedro trabaja en la oficina "<<objPedro->getNumOficina()<<endl;
		cout<<"Alberta tiene "<<objAlberta->getEdad()<<" años"<<endl;
		cout<<"Carlos trabaja en la seccion "<<objCarlos->getSeccion()<<endl;
}
