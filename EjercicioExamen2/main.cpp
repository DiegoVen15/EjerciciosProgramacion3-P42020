#include <conio.h>
#include "Artista.h"

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

	a.totalMinutosReproduccion();
	a.cantidadAlbumes();
	a.totalSencillos();
	a.guardarEnArchivo();
	_getch();
}