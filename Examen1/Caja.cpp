#include "Caja.h"
#include <iostream>

Caja::Caja() {

	this->largo;
	this->ancho;
	this->alto;
}

Caja::Caja(float largo1, float ancho1, float alto1) {

	this->largo = largo1;
	this->ancho = ancho1;
	this->alto = alto1;
}

void Caja::setLargo(float largo1) {

	this->largo = largo1;
}

void Caja::setAncho(float Ancho1) {

	this->ancho = Ancho1;
}

void Caja::setAlto(float alto1) {

	this->alto = alto1;
}

float Caja::getLargo() {

	return largo;
}

float Caja::getAncho() {

	return ancho;
}

float Caja::getAlto() {

	return alto;
}

float Caja::obtenerVolumen() {

	int l = getLargo();
	int an = getAncho();
	int al = getAlto();

	float vol = l * an * al;

	return vol;
}

Caja& operator+(const Caja& caja1, const Caja& caja2) {

	Caja respuesta;

	respuesta.largo = caja1.largo + caja2.largo;
	respuesta.ancho = caja1.ancho + caja2.ancho;
	respuesta.alto = caja1.alto + caja2.alto;	

	return respuesta;
}