#include "Album.h"

#include <iostream>
using namespace std;

Album::Album() : nombreAlbum(), anioPublicacion(0), genero(), primerSencillo(nullptr), siguienteAlbum(nullptr)
{}

Album::Album(char* nombreAlbum1, int anioPublicacion1, char* genero1, Sencillo* primerSencillo1, Album* siguienteAlbum1) :
	nombreAlbum(nombreAlbum1), anioPublicacion(anioPublicacion1), genero(genero1), primerSencillo(primerSencillo1), siguienteAlbum(siguienteAlbum1)
{}

void Album::setNombreAlbum(char* nombreAlbum1) {

	this->nombreAlbum = nombreAlbum1;
}

void Album::setAnioPublicacion(int anioPublicacion1) {

	this->anioPublicacion = anioPublicacion1;
}

void Album::setGenero(char* genero1) {

	this->genero = genero1;
}

void Album::setPrimerSencillo(Sencillo* primerSencillo1) {
	
	this->primerSencillo = primerSencillo1;
}

void Album::setSiguienteAlbum(Album* siguienteAlbum1) {

	this->siguienteAlbum = siguienteAlbum1;
}

char* Album::getNombreAlbum() {
	return this->nombreAlbum;
}

int Album::getAnioPublicacion() {
	return this->anioPublicacion;
}

char* Album::getGenero() {
	return this->genero;
}

Sencillo* Album::getPrimerSencillo() {
	return this->primerSencillo;
}

Album* Album::getSiguienteAlbum() {
	return this->siguienteAlbum;
}

int Album::duracion() {

	int total = 0;
	Sencillo s;
	int cont = 0;
	while(s.getSiguienteSencillo() != nullptr) {

		total += s.getDuracion();
	}
	return total;
}

int Album::cantidadSencillos() {

	int total = 0;
	Sencillo s;

	int cont;
	while(s.getSiguienteSencillo() != nullptr) {
		cont++;
	}
	total = cont;
	return total;
}

bool Album::estaVacia() {

	return  primerSencillo == nullptr;
}

void Album::agregarSencillo(char* nombreCancion1, int duracion1, Sencillo* siguienteSencillo1) {

	Sencillo* nuevo = new Sencillo(nombreCancion1, duracion1, siguienteSencillo1);
	if (estaVacia()) {

		primerSencillo = nuevo;
	}
	else {

		Sencillo* actual = primerSencillo;

		while (actual->getSiguienteSencillo() != nullptr) {

			actual = actual->getSiguienteSencillo();
		}

		actual->setSiguienteSencillo(nuevo);
		sencilloCont++;
	}
}

