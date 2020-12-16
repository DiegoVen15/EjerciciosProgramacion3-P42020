#include "Sencillo.h"

#include <iostream>
using namespace std;

Sencillo::Sencillo() : nombreCancion(), duracion(0), siguienteSencillo(nullptr)
{}

Sencillo::Sencillo(char* nombreCancion1, int duracion1, Sencillo* siguienteSencillo1) :
	nombreCancion(nombreCancion1), duracion(duracion1), siguienteSencillo(siguienteSencillo1)
{}

void Sencillo::setNombreCancion(char* nombreCancion1) {

	this->nombreCancion = nombreCancion1;
}

void Sencillo::setDuracion(int duracion1) {

	this->duracion = duracion1;
}

void Sencillo::setSiguienteSencillo(Sencillo* siguienteSencillo1) {

	this->siguienteSencillo = siguienteSencillo1;
}

char* Sencillo::getNombreCancion() {
	return this->nombreCancion;
}

int Sencillo::getDuracion() {
	return this->duracion;
}

Sencillo* Sencillo::getSiguienteSencillo() {
	return this->siguienteSencillo;
}



