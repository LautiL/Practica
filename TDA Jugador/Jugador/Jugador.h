/*
 * Jugador.h
 *
 *  Created on: 12 may. 2024
 *      Author: lautaro
 */

#ifndef JUGADOR_H_
#define JUGADOR_H_
#include <string>
using namespace std;

class Jugador {
private:
	string nombre;
	int puesto;
	string equipo;
	int edad;
public:
	/**
	 * pre: -
	 * post: Genera un jugador
	 */
	Jugador(string nombre, int puesto, string equipo, int edad){
		this->nombre = nombre;
		this->puesto = puesto;
		this->equipo = equipo;
		this->edad = edad;
	}
	/**
	 * pre: -
	 * post: -
	 */
	virtual ~Jugador(){}
    /**
     * pre:
     * post: Devuelve la edad del jugador
     */
	int getEdad()  {
		return this->edad;
	}
    /**
     * pre: -
     * post: Devuelve el equipo del jugador
     */
	string getEquipo() {
		return this->equipo;
	}
    /**
     * pre: -
     * post: Devuelve el nombre del jugador
     */
	string getNombre()  {
		return this->nombre;
	}
    /**
     * pre: -
     * post: Devuelve el puesto del jugador
     */
	int getPuesto()  {
		return this->puesto;
	}
};

#endif /* JUGADOR_H_ */
