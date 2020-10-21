#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main() {

	cout << "Ingrese el numero: ";
	int numero{ 0 };
	cin >> numero;
	int n1 = numero / 10000;
	int n2 = (numero % 10000) / 1000;
	int n3 = ((numero % 10000) % 1000) / 100;
	int n4 = (((numero % 10000) % 1000) % 100) / 10;
	int n5 = ((((numero % 10000) % 1000) % 100) % 10) / 1;

	if (n1 == n5 && n2 == n4) {

		cout << "El numero: " << numero << "es un palindromo\n";
	}
	else {

		cout << "El numero: " << numero << "no es un palindromo\n";
	}
}