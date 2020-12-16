#pragma once
#ifndef SENCILLO_H
#define SENCILLO_H

#include "Album.h"

class Sencillo {

private:
	char* nombreCancion;
	int duracion;
	Sencillo* siguienteSencillo;

public:

	Sencillo();
	Sencillo(char*, int, Sencillo*);

	void setNombreCancion(char*);
	char* getNombreCancion();

	void setDuracion(int);
	int getDuracion();

	void setSiguienteSencillo(Sencillo*);
	Sencillo* getSiguienteSencillo();
};
#endif // !SENCILLO_H
