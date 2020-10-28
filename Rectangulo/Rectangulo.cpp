#include "Rectangulo.h"
#include <iostream>
using namespace std;

Rectangulo::Rectangulo() : base(0), altura(0)
{}

Rectangulo::Rectangulo(int _base, int _altura) : base(_base), altura(_altura)
{}

void Rectangulo::setBase(int _base)
{
	base = _base;
}

void Rectangulo::setAltura(int _altura)
{
	this->altura = _altura;
}

int Rectangulo::getBase()
{
	return base;
}

int Rectangulo::getAltura()
{
	return altura;
}

int Rectangulo::getArea()
{
	return base * altura;
}

int Rectangulo::getPerimetro()
{
	return 2 * (base + altura);
}

void Rectangulo::establecer(int coordA1, int coordA2, int coordB1, int coordB2, int coordC1, int coordC2, int coordD1, int coordD2) {

	if (coordA1 < 20 && coordA1 > 0 && coordA2 < 20 && coordA2 > 0 && coordB1 < 20 && coordB1 > 0 && coordB2 < 20 && coordB2 > 0
		&& coordC1 < 20 && coordC1 > 0 && coordC2 < 20 && coordC2 > 0 && coordD1 < 20 && coordD1 > 0 && coordD2 < 20 && coordD2 > 0) {

		if ((coordA1 == coordB1 || coordA2 == coordB2) == (coordC1 == coordD1 || coordC2 == coordD2)) {

			cout << "Altura: " << getAltura() << "\n";
			cout << "Perimetro: " << getPerimetro() << "\n";
			cout << "Base: " << getBase() <<" \n";
			cout << "Area: " << getArea() <<" \n";
		}
	}
}

void Rectangulo::cuadrado(int coordA1, int coordA2, int coordB1, int coordB2, int coordC1, int coordC2, int coordD1, int coordD2) {

	if ((coordA1 == coordA2) && (coordA1 == coordB1 && coordA2+1) && (coordA1 == coordC1+1 && coordA2 == coordB2) && (coordD1 + 1 && coordD2 + 1) ) {

		cout << "El rectangulo es un cuadrado";
	}
}