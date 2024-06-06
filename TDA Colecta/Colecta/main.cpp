/*
 * main.cpp
 *
 *  Created on: 15 may. 2024
 *      Author: lautaro
 */
#include <iostream>
#include "Colecta.h"
using namespace std;

int main(){
	try {
		Colecta * colecta = new Colecta(1000,500);
		colecta->donar(100);
		colecta->donar(50);
		colecta->donar(50);
		colecta->donar(50);
		colecta->donar(200);
		colecta->donar(150);
		colecta->donar(300);
		cout << "La recaudación es de: $" << colecta->calcularRecaudacion() << endl;
		cout << "La recaudación faltante es de: $" << colecta->calcularRecaudacionFaltante() << endl;
		cout << "La donación máxima es de: $" << colecta->calcularDonacionMaxima() << endl;
		cout << "La cantidad de donaciones es de: " << colecta->contarDonaciones() << endl;
		delete colecta;
	} catch (char const * e){
		cout << e << endl;
	}
	return 0;
}




