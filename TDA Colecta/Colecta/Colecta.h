/*
 * Colecta.h
 *
 *  Created on: 15 may. 2024
 *      Author: lautaro
 */

#ifndef COLECTA_H_
#define COLECTA_H_

class Colecta {
private:
	int objetivo;
	int maximo;
	int recaudacion;
	int cantidadDonaciones;
	int donacionMaximaRecibida;
public:
	/**
	 * pre: -
	 * post: Crea una colecta
	 */
	Colecta(int objetivo, int maximo);
	/**
	 * pre: -
	 * post: -
	 */
	virtual ~Colecta();
	/**
	 * pre: -
	 * post: Devuelve el dinero recaudado
	 */
	int calcularRecaudacion();
	/**
	 * pre: La donación tiene que estar entre cero y el maximo aceptable
	 * post: Agrega la donación a la recaudación
	 */
	void donar(int donacion);
	/**
	 * pre: -
	 * post: Devuelve la cantidad de donaciones recibidas
	 */
	int contarDonaciones();
	/**
	 * pre: -
	 * post: Asigna, en caso de ser necesario, un nuevo valor en donación maxima recibida
	 */
	void cambiarDonacionMaximaRecibida(int donacion);
	/**
	 * pre: -
	 * post: Devuelve la donación maxima recibida
	 */
	int calcularDonacionMaxima();
	/**
	 * pre: -
	 * post: Devuelve, en caso de ser necesario, lo que falta para alcanzar el objetivo
	 */
	int calcularRecaudacionFaltante();
};

#endif /* COLECTA_H_ */
