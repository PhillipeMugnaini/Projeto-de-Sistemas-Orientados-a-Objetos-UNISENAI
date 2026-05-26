#include "contaBancaria.h"

ContaBancaria::ContaBancaria(
    string titular,
    int numeroConta,
    double saldoInicial
) {

    setTitular(titular);

    this->numeroConta =
        (numeroConta > 0)
        ? numeroConta
        : 0;

    saldo =
        (saldoInicial >= 0)
        ? saldoInicial
        : 0;
}

string ContaBancaria::getTitular() {
    return titular;
}

int ContaBancaria::getNumeroConta() {
    return numeroConta;
}

double ContaBancaria::getSaldo() {
    return saldo;
}

void ContaBancaria::setTitular(
    string titular
) {

    if (!titular.empty()) {
        this->titular = titular;
    }

}

void ContaBancaria::depositar(
    double valor
) {

    if (valor > 0) {

        saldo += valor;

        cout
        << "Deposito realizado!\n";

    }

}

void ContaBancaria::sacar(
    double valor
) {

    if (
        valor > 0 &&
        valor <= saldo
    ) {

        saldo -= valor;

        cout
        << "Saque realizado!\n";

    }

}

void ContaBancaria::transferir(
    ContaBancaria& destino,
    double valor
) {

    sacar(valor);

    destino.depositar(
        valor
    );

}