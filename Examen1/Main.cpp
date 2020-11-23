#include "Caja.h"
#include <iostream>
#include <conio.h>
using namespace std;

int main() {

	int opcion = 0;
	do {

		Caja c1;
		c1.setLargo(2);
		c1.setAncho(3);
		c1.setAlto(4);

		Caja c2;
		c2.setLargo(5);
		c2.setAncho(6);
		c2.setAlto(7);

		cout << "***MENU PRINCIPAL***\n";
		cout << "1. Obtener Volumen \n2. Sumar las Cajas\n3. Salir\n";

		cout << "Ingrese su opcion: ";
		cin >> opcion;

		switch (opcion)
		{
		case 1:

			cout << "Elegir caja 1 o caja 2: ";
			int tipoC;
			cin >> tipoC;
			if (tipoC == 1) {
				cout << "El volumen de la caja 1 es: " << c1.obtenerVolumen() << "\n";
			}
			if (tipoC == 2){
				cout << "El volumen de la caja 2 es: " << c2.obtenerVolumen() << "\n";
			}
			break;

		case 2:

			Caja c3;
			c3 = c1 + c2;

			cout << "La suma del volumen de las cajas es: " << c3.obtenerVolumen() << "\n";

		}
		
	} while (opcion != 3);
}