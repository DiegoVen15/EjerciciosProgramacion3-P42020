#include <conio.h>
#include "Artista.h"
using namespace std;

int main()
{

	Artista a;

	a.setNombreArtistico("Carlos Rivera");
	a.setAnioNacimiento(1996);

	Album al;
	al.setNombreAlbum("Iliada");
	al.setGenero("Rock");
	al.setAnioPublicacion(2010);

	Sencillo s;

	s.setNombreCancion("Homero");
	s.setDuracion(5);
	s.setNombreCancion("Odisea");
	s.setDuracion(3);
	s.setNombreCancion("Azul");
	s.setDuracion(4);

	cout << a.totalMinutosReproduccion() << "\n";
	cout << a.cantidadAlbumes() << "\n";
	cout << a.totalSencillos() << "\n"

	a.guardarEnArchivo();
	_getch();
}