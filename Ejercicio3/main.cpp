#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main() {

	long numB = 0;
	long Bin = 1;
	long resi = 0;
	int numDec = 0;

	cout << "Ingresar el numero binario: ";
			cin >> numB;

			if (numB == 0) {

				cout << "El numero en decimal es: 0 " << endl;
			}
			while (numB != 0) {  
				
				resi = 0;
				resi = Bin * (numB % 10);
				numDec += resi;
				Bin = Bin * 2;
				numB = numB / 10;
			}

			printf("El numero en decimal es: %d", numDec);
			cout << endl;
}