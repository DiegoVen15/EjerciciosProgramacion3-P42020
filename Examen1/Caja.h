#pragma once
#ifndef CAJA_H
#define CAJA_H

#include <iostream>

class Caja {

	friend Caja& operator+(const Caja&, const Caja&);

private:

	float largo;
	float ancho;
	float alto;

public:
	
	Caja();
	Caja(float, float, float);
	
	void setLargo(float);
	void setAncho(float);
	void setAlto(float);

	float getLargo();
	float getAncho();
	float getAlto();

	float obtenerVolumen();

};
#endif // !CAJA_H
