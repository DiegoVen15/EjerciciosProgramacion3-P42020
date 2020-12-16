#include "Artista.h"

#include <iostream>
#include <fstream>
using namespace std;

Artista::Artista() : nombreArtistico(), anioNacimiento(0), primerAlbum(nullptr)
{}

Artista::Artista(char* nombreA, int anioN, Album* primerA) : nombreArtistico(nombreA), anioNacimiento(anioN), primerAlbum(primerA)
{}

void Artista::setNombreArtistico(char* nombreA) {

	this->nombreArtistico = nombreA;
}

void Artista::setAnioNacimiento(int anioN) {

	this->anioNacimiento = anioN;
}

void Artista::setPrimerAlbum(Album* primerA) {

	this->primerAlbum = primerA;
}

char* Artista::getNombreArtistico() {

	return this->nombreArtistico;
}

int Artista::getAnioNacimiento() {

	return this->anioNacimiento;
}

Album* Artista::getPrimerAlbum() {

	return this->primerAlbum;
}

int Artista::totalSencillos() {

	Artista ar;
	Album al;
	Sencillo s;
	int total = 0;
	if (al.getSiguienteAlbum() == nullptr) {
		
		total = al.cantidadSencillos();
		return total;
	}
	else if(al.getSiguienteAlbum() != nullptr) {

		total += al.cantidadSencillos();
		return total;
	}
}

int Artista::cantidadAlbumes() {

	Artista ar;
	Album al;
	int cont = 0;
	if (al.getSiguienteAlbum() != nullptr) {

		cont++;
	}

	return cont;
}

int Artista::totalMinutosReproduccion() {

	Artista ar;
	Album al;
	int total = 0;
	if (al.getSiguienteAlbum() != nullptr) {

		total += al.duracion();
	}
}

bool Artista::estaVacia() {

	return primerAlbum == nullptr;
}

void Artista::agregarAlbum(char* nombreAlbum1, int anioPublicacion1, char* genero1, Sencillo* primerSencillo1, Album* siguienteAlbum1) {

	Album* nuevo = new Album(nombreAlbum1, anioPublicacion1, genero1, primerSencillo1, siguienteAlbum1);
	
	if (estaVacia()) {
		primerAlbum = nuevo;
	}
	else {

		Album* actual = primerAlbum;

		while (actual->getSiguienteAlbum() != nullptr) {

			actual = actual->getSiguienteAlbum();
		}

		actual->setSiguienteAlbum(nuevo);
	}
}


void Artista::guardarEnArchivo(){

	ofstream archivoArtista("artistas.dat", ios::app);

	if (!archivoArtista) {

		cout << "Error al intentar abrir archivo\n";
		return;
	}
	Artista ar;
	Album al;
	Sencillo s;
	int contS = 1;
	int contA = 1;
	cout << "Artista: " << ar.getNombreArtistico() << "Año de Nacimiento: " << ar.getAnioNacimiento()  << "\n"; 
	cout << "Album" << contA << ": " << al.getNombreAlbum() << "Año de Lanzamiento " << al.getAnioPublicacion() << "Genero: " << al.getGenero() << "\n";
	cout << "Cancion " << contS << ": " << s.getNombreCancion() << "Duracion : " << s.getDuracion() << "\n";
	
	while(al.getSiguienteAlbum() != nullptr) {
		contS = 1;
		cout << "Album" << contA << ": " << al.getNombreAlbum() << "Año de Lanzamiento " << al.getAnioPublicacion() << "Genero: " << al.getGenero() << "\n";
		while (s.getSiguienteSencillo() != nullptr) {
			contS++;
			cout << "Cancion " << contS << ": " << s.getNombreCancion() << "Duracion : " << s.getDuracion() << "\n";
		}
	}
	archivoArtista.close();
}

