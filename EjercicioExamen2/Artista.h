#pragma once
#ifndef ARTISTA_H
#define ARTISTA_H
#include "Album.h"
#include "Sencillo.h"
class Artista {

private:
	char* nombreArtistico;
	int anioNacimiento;
	Album* primerAlbum;

public:

	Artista();
	Artista(char*, int, Album*);

	void setNombreArtistico(char*);
	char* getNombreArtistico();

	void setAnioNacimiento(int);
	int getAnioNacimiento();

	void setPrimerAlbum(Album*);
	Album* getPrimerAlbum();

	int totalSencillos();
	int cantidadAlbumes();
	int totalMinutosReproduccion();

	bool estaVacia();
	void agregarAlbum(char* nombreAlbum, int anioPublicacion, char* genero, Sencillo* primerSencillo, Album* siguienteAlbum);
	void guardarEnArchivo();
};

#endif // !ARTISTA_H
