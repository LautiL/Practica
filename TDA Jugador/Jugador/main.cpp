/*
 * main.cpp
 *
 *  Created on: 12 may. 2024
 *      Author: lautaro
 */
#include <iostream>
#include <string>
#include "Lista.h"
#include "Jugador.h"
using namespace std;

int main(){
	Lista<Jugador*> * miLista = new Lista<Jugador*>();
	Jugador * jugador1 = new Jugador("Juan",10,"River Plate",31);
	Jugador * jugador2 = new Jugador("Pedro",5,"River Plate",25);
	Jugador * jugador3 = new Jugador("Andres",7,"Independiente",33);
	Jugador * jugador4 = new Jugador("Matias",4,"San Lorenzo",24);
	Jugador * jugador5 = new Jugador("Franco",1,"River Plate",37);
	miLista->agregar(jugador1);
	miLista->agregar(jugador2);
	miLista->agregar(jugador3);
	miLista->agregar(jugador4);
	miLista->agregar(jugador5);
	miLista->iniciarCursor();
	while (miLista->avanzarCursor()){
		Jugador * jugador = miLista->obtenerCursor();
		if (jugador->getEquipo() == "River Plate" && jugador->getEdad() > 30){
		     cout << jugador->getNombre() << endl;
		     cout << jugador->getPuesto() << endl;
		     }
	}
	delete jugador1;
	delete jugador2;
	delete jugador3;
	delete jugador4;
	delete jugador5;
	return 0;
}



