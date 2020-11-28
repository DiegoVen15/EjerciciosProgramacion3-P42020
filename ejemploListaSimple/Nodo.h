#pragma once
#ifndef NODO_H
#define NODO_H

class Nodo
{
public:
	Nodo();
	Nodo(int, Nodo*);

	void setValor(int);
	void setSiguiente(Nodo*);

	int getValor();
	Nodo* getSiguiente();

private:
	int valor;
	Nodo* siguiente; //apuntador al siguiente elemento de la lista
};


#endif // !NODO_H