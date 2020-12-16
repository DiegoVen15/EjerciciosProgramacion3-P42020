#pragma once
#ifndef ALBUM_H
#define ALBUM_H

#include "Artista.h"
#include "Sencillo.h"

class Album {

private:

	char* nombreAlbum;
	int anioPublicacion;
	char* genero;
	Sencillo* primerSencillo;
	Album* siguienteAlbum;
	
	int sencilloCont;
public:

	Album();
	Album(char*, int, char*, Sencillo*, Album*);

	void setNombreAlbum(char*);
	char* getNombreAlbum();

	void setAnioPublicacion(int);
	int getAnioPublicacion();

	void setGenero(char*);
	char* getGenero();

	void setPrimerSencillo(Sencillo*);
	Sencillo* getPrimerSencillo();

	void setSiguienteAlbum(Album*);
	Album* getSiguienteAlbum();

	int duracion();
	int cantidadSencillos();

	bool estaVacia();
	void agregarSencillo(char* nombreCancion, int duracion, Sencillo* siguienteSencillo);
};
#endif // !ALBUM_H
