#include <iostream>
#include <cmath>
#include "Cuenta.h"

using namespace std;

cuenta::cuenta(){}

cuenta::cuenta(float saldoBase) {
	if (saldoBase < 0) std::cout << "Saldo Inicial no valido";
	saldoBase = 0;
};

float cuenta::getSaldo() {
	return this->saldo;
}
void cuenta::setSaldo(float saldo) {
	this->saldo;
}

float cuenta::getAbono() {
	return this->abono;
}
float cuenta::getRetiro() {
	return this->retiro;
}
void cuenta::imprimirSaldo() {
	cout << "Saldo en la cuenta: " << getSaldo << std::endl;
}

void cuenta::miembroAbonar(float cantidad) {
		
	 setSaldo(getSaldo() + cantidad);
}

void cuenta::miembroCargar(float cantidad) {
	setSaldo(getSaldo() - cantidad);
	if (getSaldo() < 0) {
		cout << "No se pudo realizar la carga, fondos insuficientes";
		return setSaldo(getSaldo() + cantidad);
	}
}