#include "contaPoupanca.h"

ContaPoupanca::ContaPoupanca(
    string titular,
    int numero,
    double saldo
)

: ContaBancaria(
    titular,
    numero,
    saldo
)

{}

void ContaPoupanca::renderJuros() {

    saldo *= 1.05;

}

void ContaPoupanca::exibirDados() {

    cout
    << "\n=== CONTA POUPANCA ===\n";

    cout
    << "Titular: "
    << titular
    << endl;

    cout
    << "Saldo: "
    << saldo
    << endl;

}