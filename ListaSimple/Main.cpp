#include "SeccionLista.h"
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main() {

	SeccionLista sl;
	sl.agregarAlumno((char*)"Diego", 97);
	sl.agregarAlumno((char*)"Andrew", 30);
	sl.agregarAlumno((char*)"Carmenza", 79);

	sl.listarSeccion();

	cout << "Cantidad de Aprobados: " << sl.cantidadAprobados() << "\n";

}