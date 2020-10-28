#pragma once
#pragma once
#ifndef RECTANGULO_H
#define RECTANGULO_H

class Rectangulo
{
public:
	Rectangulo(); 
	Rectangulo(int, int); 

	void setBase(int);
	void setAltura(int);

	int getBase();
	int getAltura();

	int getArea();
	int getPerimetro();

	void establecer(int, int, int, int, int, int, int, int);
	void cuadrado(int, int, int, int, int, int, int, int);


private:
	int base, altura;
};

#endif // !RECTANGULO_H