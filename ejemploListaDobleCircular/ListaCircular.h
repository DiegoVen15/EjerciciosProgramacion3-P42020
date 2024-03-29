#pragma once
#ifndef LISTA_CIRCULAR_H
#define LISTA_CIRCULAR_H

#include "Nodo.h"

class ListaCircular
{
public:
	ListaCircular();
	void agregarNodo(const char*);
	void eliminarNodo(char*);
	void imprimirLista();

private:
	Nodo* primero;
	Nodo* ultimo;

	bool estaVacia();
};

#endif // !LISTA_CIRCULAR_H
