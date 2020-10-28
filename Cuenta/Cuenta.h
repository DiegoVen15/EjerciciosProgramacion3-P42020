#pragma once
#pragma once
#include <iostream>
#ifndef CUENTA_H
#define CUENTA_H

class cuenta {

private:
	float saldoAbonado;

public:
	cuenta();
	cuenta(float saldoBase);
	float abono, retiro;
	float saldo;
	void setSaldo(float);
	float getSaldo(void);

	float getAbono();
	float getRetiro();
	void imprimirSaldo();
	void miembroAbonar(float);
	void miembroCargar(float);
};
#endif // !CUENTA_H