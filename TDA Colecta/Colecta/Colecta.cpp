/*
 * Colecta.cpp
 *
 *  Created on: 15 may. 2024
 *      Author: lautaro
 */

#include "Colecta.h"

Colecta::Colecta(int objetivo, int maximo) {
	this->objetivo = objetivo;
	this->maximo = maximo;
	this->recaudacion = 0;
	this->cantidadDonaciones = 0;
	this->donacionMaximaRecibida = 0;
}

Colecta::~Colecta() {}

int Colecta::calcularRecaudacion(){
	return this->recaudacion;
}

void Colecta::donar(int donacion){
	if (donacion > this->maximo){
		throw "La donación tiene que ser menor o igual al maximo aceptado";
	}
	if (donacion <= 0){
		throw "La donación tiene que ser mayor a cero";
	}
	this->recaudacion = this->recaudacion + donacion;
	this->cantidadDonaciones ++;
	cambiarDonacionMaximaRecibida(donacion);
}

int Colecta::contarDonaciones(){
	return this->cantidadDonaciones;
}

void Colecta::cambiarDonacionMaximaRecibida(int donacion){
	if (donacion > this->donacionMaximaRecibida){
		this->donacionMaximaRecibida = donacion;
	}
}

int Colecta::calcularDonacionMaxima(){
	return this->donacionMaximaRecibida;
}

int Colecta::calcularRecaudacionFaltante(){
	int faltante;
	if (this->recaudacion < this->objetivo){
		faltante = this->objetivo - this->recaudacion;
	}
	else {
		faltante = 0;
	}
	return faltante;
}


