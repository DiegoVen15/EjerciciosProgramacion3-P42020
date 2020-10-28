#include <iostream>
#include <conio.h>

#include "Cuenta.h"

using std::cout;

int main()
{
	cuenta c;
	c.setSaldo(250);
	c.miembroAbonar(300);
	c.miembroCargar(100);
	c.obtenerSaldo();

	cuenta c1;
	c.setSaldo(500);
	c.miembroAbonar(50);
	c.miembroCargar(400);
	c.obtenerSaldo();

	_getch();
}