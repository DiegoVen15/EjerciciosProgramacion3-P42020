#include <iostream>
#include <conio.h>
#include <set>

using namespace std;
void calcCont(int[]);

int main() {

	int array[20] = { 1,2,1,2,4,3,3,1,4,3,5,2,1,2,1,3,5,1,1 };
	calcCont(array);
	
	_getch();
	return 0;
}

void calcCont(int array[]) {

	int cont1 = 0;
	int cont2 = 0;
	int cont3 = 0;
	int cont4 = 0;
	int cont5 = 0;

	int par1 = 0;
	int par2 = 0;
	int par3 = 0;
	int par4 = 0;
	int par5 = 0;

	for (int i = 0; i < 100; i++) {
		//valor i < 100 para probar que aun cambiando el numero de valores del array no de error
		if (array[i] == 1) {

			cont1++;
			par1 = (cont1/2);
		}

		if(array[i] == 2) {

			cont2++;
			par2 = (cont2/2);
		}

		if (array[i] == 3) {

			cont3++;
			par3 = (cont3 / 2);

		}

		if (array[i] == 4) {

			cont4++;
			par4 = (cont4/2);

		}

		if (array[i] == 5) {

			cont5++;
			par5 = (cont5/2);

		}
	}

	cout << "Vector[1, 2, 1, 2, 4, 3, 3, 1, 4, 3, 5, 2, 1, 2, 1, 3, 5, 1, 1], size = 20\n";
	cout << "Pares de calcetines '1': " << par1 << "\n"
		<< "Pares de calcetines '2': " << par2 << "\n" << "Pares de calcetines '3': " << par3 << "\n"
		<< "Pares de calcetines '4': " << par4 << "\n" << "Pares de calcetines '4': " << par4 << "\n";
}